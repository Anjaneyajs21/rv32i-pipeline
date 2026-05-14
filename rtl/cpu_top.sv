module cpu_top (
    input  logic clk,
    input  logic rst
);
    // Program Counter
    logic [31:0] pc, pc_next;
    
    // Instruction fields
    logic [31:0] instr;
    logic [6:0]  opcode;
    logic [4:0]  rs1, rs2, rd;
    logic [2:0]  funct3;
    logic [6:0]  funct7;
    logic [31:0] imm;
    
    // Register file signals
    logic [31:0] rd1, rd2;
    logic        reg_we;
    logic [31:0] reg_wd;
    
    // ALU signals
    logic [3:0]  alu_ctrl;
    logic [31:0] alu_result;
    logic        alu_zero;
    
    // Memory signals
    logic        mem_we;
    logic [31:0] mem_rd;
    
    // ─── Program Counter ───────────────────────────
    always_ff @(posedge clk or posedge rst) begin
        if (rst) pc <= 32'd0;
        else     pc <= pc_next;
    end
    
    // ─── Instruction Fetch ─────────────────────────
    imem IMEM (
        .addr  (pc),
        .instr (instr)
    );
    
    // ─── Instruction Decode ────────────────────────
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign funct3 = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign funct7 = instr[31:25];
    
    // Immediate decode (I-type for now)
    assign imm = {{20{instr[31]}}, instr[31:20]};
    
    // ─── Register File ─────────────────────────────
    regfile REGFILE (
        .clk (clk),
        .we  (reg_we),
        .rs1 (rs1),
        .rs2 (rs2),
        .rd  (rd),
        .wd  (reg_wd),
        .rd1 (rd1),
        .rd2 (rd2)
    );
    
    // ─── ALU ───────────────────────────────────────
    alu ALU (
        .a        (rd1),
        .b        (rd2),
        .alu_ctrl (alu_ctrl),
        .result   (alu_result),
        .zero     (alu_zero)
    );
    
    // ─── Data Memory ───────────────────────────────
    dmem DMEM (
        .clk  (clk),
        .we   (mem_we),
        .addr (alu_result),
        .wd   (rd2),
        .rd   (mem_rd)
    );
    
    // ─── Simple Control (R-type only for now) ──────
    always_comb begin
        // defaults
        reg_we   = 1'b0;
        mem_we   = 1'b0;
        alu_ctrl = 4'b0000;
        reg_wd   = alu_result;
        pc_next  = pc + 32'd4;
        
        case (opcode)
            7'b0110011: begin // R-type (ADD, SUB, AND, OR)
                reg_we = 1'b1;
                case (funct3)
                    3'b000: alu_ctrl = (funct7[5]) ? 4'b0001 : 4'b0000; // SUB : ADD
                    3'b111: alu_ctrl = 4'b0010; // AND
                    3'b110: alu_ctrl = 4'b0011; // OR
                    3'b100: alu_ctrl = 4'b0100; // XOR
                    default: alu_ctrl = 4'b0000;
                endcase
            end
            
            7'b0010011: begin // I-type (ADDI)
                reg_we   = 1'b1;
                alu_ctrl = 4'b0000; // ADD
                // use immediate instead of rs2
            end
            
            7'b0000011: begin // Load (LW)
                reg_we = 1'b1;
                alu_ctrl = 4'b0000; // ADD for address
                reg_wd = mem_rd;
            end
            
            7'b0100011: begin // Store (SW)
                mem_we   = 1'b1;
                alu_ctrl = 4'b0000; // ADD for address
            end
            
            7'b1100011: begin // Branch (BEQ)
                alu_ctrl = 4'b0001; // SUB to compare
                if (alu_zero)
                    pc_next = pc + {{19{instr[31]}}, 
                                    instr[31], instr[7],
                                    instr[30:25], instr[11:8], 1'b0};
            end
            
            default: begin
                reg_we = 1'b0;
                mem_we = 1'b0;
            end
        endcase
    end

endmodule