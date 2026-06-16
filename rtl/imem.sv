module imem (
    input  logic [31:0] addr,
    output logic [31:0] instr
);
    logic [31:0] mem [0:63];
    initial $readmemh("sw/program.hex", mem);
    // FIX: use [7:2] (6 bits) to index 64-entry array
    assign instr = mem[addr[7:2]];
endmodule
