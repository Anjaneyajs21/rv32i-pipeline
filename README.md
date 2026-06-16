# RV32I Single-Cycle CPU

A single-cycle RISC-V (RV32I) CPU implemented in SystemVerilog, simulated with Verilator.

Built as part of RTL design portfolio for chip design placement (NVIDIA, Qualcomm, AMD, Intel).

---

## Architecture

```
        ┌─────┐    ┌─────┐    ┌─────┐    ┌──────┐    ┌────┐
 PC ───▶│ IF  │───▶│ ID  │───▶│ EX  │───▶│ MEM  │───▶│ WB │
        └─────┘    └─────┘    └─────┘    └──────┘    └────┘
         IMEM      Decode       ALU        DMEM      Regfile
                   Regfile    Control
```

Single-cycle: every instruction completes in one clock cycle.

**Datapath:**
- PC register with synchronous reset
- Instruction memory (read-only, initialized from `sw/program.hex`)
- Register file: 32 × 32-bit registers, x0 hardwired to 0
- ALU: ADD, SUB, AND, OR, XOR
- Data memory: 64 × 32-bit words
- Writeback mux: selects ALU result or memory read

---

## Supported Instructions

| Type    | Instructions              | Opcode      |
|---------|---------------------------|-------------|
| R-type  | ADD, SUB, AND, OR, XOR   | `0110011`   |
| I-type  | ADDI, ANDI, ORI          | `0010011`   |
| Load    | LW                        | `0000011`   |
| Store   | SW                        | `0100011`   |
| Branch  | BEQ                       | `1100011`   |

---

## File Structure

```
rv32i-pipeline/
├── rtl/
│   ├── cpu_top.sv      # Top-level: PC, control unit, datapath
│   ├── alu.sv          # ALU: ADD/SUB/AND/OR/XOR
│   ├── regfile.sv      # 32x32 register file
│   ├── imem.sv         # Instruction memory
│   └── dmem.sv         # Data memory
├── tb/
│   └── tb_cpu.sv       # Testbench with $display monitoring
└── sw/
    └── program.hex     # Test program in hex
```

---

## How to Run

### Prerequisites
- Verilator ≥ 5.0
- GCC with C++20 support

### Simulate

```bash
# Clone
git clone https://github.com/Anjaneyajs21/rv32i-pipeline.git
cd rv32i-pipeline

# Compile
verilator --binary --timing -sv \
  rtl/alu.sv rtl/regfile.sv rtl/imem.sv rtl/dmem.sv rtl/cpu_top.sv \
  tb/tb_cpu.sv --top-module tb_cpu -Mdir obj_dir

# Run
./obj_dir/Vtb_cpu
```

### Expected Output

```
t=5  | pc=0x00000000 | instr=0x00100113
  >> WRITE x2 = 0x00000001    # ADDI x2, x0, 1
t=15 | pc=0x00000004 | instr=0x00200193
  >> WRITE x3 = 0x00000002    # ADDI x3, x0, 2
t=25 | pc=0x00000008 | instr=0x00310233
  >> WRITE x4 = 0x00000003    # ADD  x4, x2, x3  (1+2=3)
=== Simulation done ===
```

---

## Test Program

The default `sw/program.hex` runs:

```asm
addi x2, x0, 1    # x2 = 1
addi x3, x0, 2    # x3 = 2
add  x4, x2, x3   # x4 = 3  (verifies R-type + I-type)
nop
```

---

## Key Design Decisions

**Synchronous reset** — PC resets on the next rising edge after `rst` asserts. Avoids async reset race conditions in synthesis.

**Branch offset as wire** — Branch immediate decoded outside `always_comb` to avoid tool-specific part-select limitations and improve portability.

**Memory indexing** — `addr[7:2]` used as 6-bit word index into 64-entry memory arrays, avoiding width mismatch lint warnings.

---

## Bugs Fixed

| Bug | Symptom | Fix |
|-----|---------|-----|
| PC reset timing | Instruction 0 executed twice | Deassert rst 1ns after posedge clk |
| Branch offset in always_comb | Verilator/iverilog part-select error | Moved to continuous assign wire |
| Memory index width | WIDTHTRUNC warning | Changed `addr[9:2]` → `addr[7:2]` |

---

## Roadmap

- [ ] 5-stage pipeline (IF/ID/EX/MEM/WB registers)
- [ ] Data forwarding (EX→EX, MEM→EX bypass)
- [ ] Load-use hazard stall
- [ ] Branch flush
- [ ] JAL / LUI instructions
- [ ] SVA assertions for formal verification

---

## Author

**Anjaneya J S** (EE25M011)  
M.Tech Communication & Signal Processing — IIT Madras  
[GitHub](https://github.com/Anjaneyajs21) · [LinkedIn](https://linkedin.com/in/anjaneya-js)
