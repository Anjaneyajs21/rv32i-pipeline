module tb_cpu;
    logic clk, rst;
    
    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 10ns period = 100MHz
    
    // Instantiate CPU
    cpu_top DUT (
        .clk (clk),
        .rst (rst)
    );
    
    // Test sequence
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_cpu);
        
        // Reset
        rst = 1;
        repeat(2) @(posedge clk);
        rst = 0;
        
        // Run for 20 cycles
        repeat(20) @(posedge clk);
        
        $display("Simulation done!");
        $finish;
    end
    
    // Monitor register writes
    always @(posedge clk) begin
        if (DUT.REGFILE.we && DUT.REGFILE.rd != 0)
            $display("t=%0t | rd=x%0d | wd=0x%08h",
                     $time, DUT.REGFILE.rd, DUT.REGFILE.wd);
    end
    
endmodule