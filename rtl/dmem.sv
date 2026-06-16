module dmem (
    input  logic        clk,
    input  logic        we,
    input  logic [31:0] addr,
    input  logic [31:0] wd,
    output logic [31:0] rd
);
    logic [31:0] mem [0:63];
    initial foreach (mem[i]) mem[i] = 32'd0;

    always_ff @(posedge clk)
        if (we) mem[addr[7:2]] <= wd;

    // FIX: use [7:2] (6 bits) to index 64-entry array
    assign rd = mem[addr[7:2]];
endmodule
