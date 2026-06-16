module tb_cpu;
    logic clk, rst;
    
    initial clk = 0;
    always #5 clk = ~clk;
    
    cpu_top DUT (
        .clk (clk),
        .rst (rst)
    );
    
    initial begin
        rst = 1;
        @(posedge clk);
        rst = 0;
        repeat(20) @(posedge clk);
        $display("Simulation done!");
        $finish;
    end
    
    always @(posedge clk) begin
        $display("t=%0t | pc=0x%08h | instr=0x%08h",
                 $time, DUT.pc, DUT.instr);
    end
    
    always @(posedge clk) begin
        if (DUT.REGFILE.we && DUT.REGFILE.rd != 0)
            $display("t=%0t | rd=x%0d | wd=0x%08h",
                     $time, DUT.REGFILE.rd, DUT.REGFILE.wd);
    end
    
endmodule