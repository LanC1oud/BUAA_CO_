`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:50:24 11/03/2025 
// Design Name: 
// Module Name:    mips 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mips(
    input clk,
    input reset
    );

    //F
	 wire [31:0] F_PC;
	 wire [31:0] F_NPC;
	 wire [31:0] F_PCplus8 = F_PC + 32'h0000_0008;
	 wire [31:0] F_Instr;
	 
	 //D
	 wire D_RegDst;
	 wire [1:0] D_NPC_Sel;
	 wire D_EXTop;
	 wire D_Regra;
	 wire [5:0] D_ALUop;
	 wire [3:0] D_t_rs;
	 wire [3:0] D_t_rt;
	 wire [3:0] D_t;
	 
	 wire [31:0] D_Instr;
    wire [5:0] D_opcode = D_Instr[31:26];
    wire [4:0] D_rs = D_Instr[25:21];
    wire [4:0] D_rt = D_Instr[20:16];
    wire [4:0] D_rd = D_Instr[15:11];
    wire [4:0] D_shamt = D_Instr[10:6];
    wire [5:0] D_func = D_Instr[5:0];
    wire [15:0] D_imm16 = D_Instr[15:0];
    wire [25:0] D_imm26 = D_Instr[25:0];
	 
	 wire [4:0] D_A1 = D_rs;
	 wire [4:0] D_A2 = D_rt;
	 wire [4:0] D_A3 = (D_Regra) ? 5'b11111 :
	                   (D_RegDst) ? D_rd : D_rt;
	 wire [31:0] D_RD1;
	 wire [31:0] D_RD2;
	 
	 wire [31:0] D_ext32;
	 wire D_zero;
	 
	 wire [31:0] D_PCplus8;
	 wire [31:0] D_PC;  //F to D
	 
	 //E
	 wire E_ALUsrc;
	 wire [5:0] E_ALUop;
	 wire [3:0] E_t_rs;
	 wire [3:0] E_t_rt;
	 wire [3:0] E_t;
	 
	 wire [31:0] E_Instr;
    wire [5:0] E_opcode = E_Instr[31:26];
    wire [4:0] E_rs = E_Instr[25:21];
    wire [4:0] E_rt = E_Instr[20:16];
    wire [4:0] E_rd = E_Instr[15:11];
    wire [4:0] E_shamt = E_Instr[10:6];
    wire [5:0] E_func = E_Instr[5:0];
    wire [15:0] E_imm16 = E_Instr[15:0];
    wire [25:0] E_imm26 = E_Instr[25:0];
	 
	 wire [31:0] E_inputA = E_fixedRD1;
	 wire [31:0] E_inputB = (E_ALUsrc) ? E_ext32 : E_fixedRD2;
	 wire [31:0] E_ALUres;
	 
	 wire [31:0] E_PCplus8;
	 wire [31:0] E_PC;
	 wire [31:0] E_RD1;
	 wire [31:0] E_RD2;
	 wire [4:0] E_A3;
	 wire [31:0] E_ext32; // D to E
	 
	 //M
	 wire M_MemWrite;
	 wire [5:0] M_ALUop;
	 wire [3:0] M_t_rs;
	 wire [3:0] M_t_rt;
	 wire [3:0] M_t;
	 
	 wire [31:0] M_Instr;
    wire [5:0] M_opcode = M_Instr[31:26];
    wire [4:0] M_rs = M_Instr[25:21];
    wire [4:0] M_rt = M_Instr[20:16];
    wire [4:0] M_rd = M_Instr[15:11];
    wire [4:0] M_shamt = M_Instr[10:6];
    wire [5:0] M_func = M_Instr[5:0];
    wire [15:0] M_imm16 = M_Instr[15:0];
    wire [25:0] M_imm26 = M_Instr[25:0];
	 
	 wire [31:0] M_MemAddr = M_ALUres;
	 wire [31:0] M_MemData = M_fixedRD2;
	 wire [31:0] M_DMdata;
	 
	 wire [31:0] M_PCplus8;
	 wire [31:0] M_PC;
	 wire [31:0] M_ALUres;
	 wire [31:0] M_RD2;
	 wire [4:0] M_A3;  //E to M
	 
	 //W
	 wire W_MemtoReg;
    wire W_RegWrite;
    wire W_PCtoReg;
    wire [5:0] W_ALUop;
    wire [3:0] W_t_rs;
    wire [3:0] W_t_rt;
    wire [3:0] W_t;
	 
	 wire [31:0] W_Instr;
    wire [5:0] W_opcode = W_Instr[31:26];
    wire [4:0] W_rs = W_Instr[25:21];
    wire [4:0] W_rt = W_Instr[20:16];
    wire [4:0] W_rd = W_Instr[15:11];
    wire [4:0] W_shamt = W_Instr[10:6];
    wire [5:0] W_func = W_Instr[5:0];
    wire [15:0] W_imm16 = W_Instr[15:0];
    wire [25:0] W_imm26 = W_Instr[25:0];
	 
	 wire [4:0] W_A3;
	 wire [31:0] W_WD = (W_PCtoReg) ? W_PCplus8 :
							  (W_MemtoReg) ? W_DMdata : W_ALUres;
	 
	 wire [31:0] W_PCplus8;
	 wire [31:0] W_PC;
	 wire [31:0] W_ALUres;
	 wire [31:0] W_DMdata;  //M to W
	 
	 //forward data
	 wire [31:0] D_fixedRD1;
    wire [31:0] D_fixedRD2;
    wire [31:0] E_fixedRD1;
    wire [31:0] E_fixedRD2;
    wire [31:0] M_fixedRD2;
	 
	 //tuse tnew
	 wire [3:0] D_t_rsuse;
    wire [3:0] D_t_rtuse;
    wire [3:0] D_t_new;
    wire [3:0] E_t_rsuse;
    wire [3:0] E_t_rtuse;
    wire [3:0] E_t_new;
    wire [3:0] M_t_rsuse;
    wire [3:0] M_t_rtuse;
    wire [3:0] M_t_new;
    wire [3:0] W_t_rsuse;
    wire [3:0] W_t_rtuse;
    wire [3:0] W_t_new;
	 
	 wire E_isPCplus8;
	 wire M_isPCplus8;
	 
	 //forward way
	 wire D_RD1_from_E_PCplus8;
	 wire D_RD2_from_E_PCplus8;
	 
	 wire D_RD1_from_M_PCplus8;
	 wire D_RD2_from_M_PCplus8;
	 wire E_RD1_from_M_PCplus8;
	 wire E_RD2_from_M_PCplus8;
	 
	 wire D_RD1_from_M;
	 wire D_RD2_from_M;
	 wire E_RD1_from_M;
	 wire E_RD2_from_M;
	 
	 wire D_RD1_from_W;
	 wire D_RD2_from_W;
	 wire E_RD1_from_W;
	 wire E_RD2_from_W;
	 wire M_RD2_from_W;
	 
	 //en and clear
	 wire PC_en;
	 wire FD_en;
	 wire DE_en;
	 wire EM_en;
	 wire MW_en;
	 wire FD_clear;
	 wire DE_clear;
	 wire EM_clear;
	 wire MW_clear;
	 
	 wire D_stall;
 
    PC PC (
	 .clk(clk), 
	 .reset(reset), 
	 .PC_en(PC_en),
	 .NPC(F_NPC), 
	 .PC(F_PC)
	 );
	 
    NPC NPC (
	 .F_PC(F_PC), 
	 .NPC_Sel(D_NPC_Sel), 
	 .zero(D_zero), 
	 .imm16(D_imm16), 
    .imm26(D_imm26), 
	 .GRF(D_fixedRD1), 
	 .NPC(F_NPC)
	 );
	 
    IM IM (
	 .addr(F_PC), 
	 .Instr(F_Instr)
	 );
	 
	 FDreg FDreg (
	 .clk(clk),
	 .reset(reset),
	 .FD_en(FD_en),
	 .FD_clear(FD_clear),
	 .F_Instr(F_Instr),
	 .F_PCplus8(F_PCplus8),
	 .F_PC(F_PC),
	 .D_Instr(D_Instr),
	 .D_PCplus8(D_PCplus8),
	 .D_PC(D_PC)
	 );
	 
    Controller DController (
	 .opcode(D_opcode), 
	 .func(D_func), 
	 .RegDst(D_RegDst),
	 .NPC_Sel(D_NPC_Sel), 
	 .EXTop(D_EXTop),
	 .Regra(D_Regra),
	 .ALUop(D_ALUop),
	 .t_rs(D_t_rs),
	 .t_rt(D_t_rt),
	 .t(D_t)
	 );
	 
    GRF GRF (
	 .clk(clk),
	 .reset(reset), 
	 .RegWrite(W_RegWrite), 
	 .A1(D_A1), 
	 .A2(D_A2),
    .A3(W_A3), 
	 .WD(W_WD), 
	 .RD1(D_RD1), 
	 .RD2(D_RD2),
	 .PC(W_PC)
	 );
	 
    EXT EXT (
	 .imm16(D_imm16),
	 .EXTop(D_EXTop),
	 .ext32(D_ext32)
	 );
	 
	 CMP CMP (
	 .inputA(D_fixedRD1),
	 .inputB(D_fixedRD2),
	 .ALUop(D_ALUop),
	 .zero(D_zero)
	 );
	 
	 DEreg DEreg (
	 .clk(clk), 
	 .reset(reset), 
	 .DE_en(DE_en), 
	 .DE_clear(DE_clear),
    .D_Instr(D_Instr), 
	 .D_PCplus8(D_PCplus8), 
	 .D_PC(D_PC),
    .D_RD1(D_fixedRD1), 
	 .D_RD2(D_fixedRD2), 
    .D_A3(D_A3), 
	 .D_ext32(D_ext32),
    .E_Instr(E_Instr), 
	 .E_PCplus8(E_PCplus8), 
	 .E_PC(E_PC),
    .E_RD1(E_RD1), 
	 .E_RD2(E_RD2), 
	 .E_A3(E_A3), 
	 .E_ext32(E_ext32)
	 );
	 
	 Controller EController (
	 .opcode(E_opcode),
	 .func(E_func),
	 .ALUsrc(E_ALUsrc),
	 .ALUop(E_ALUop),
	 .t_rs(E_t_rs),
	 .t_rt(E_t_rt),
	 .t(E_t)
	 );
	 
    ALU ALU (
	 .inputA(E_inputA), 
	 .inputB(E_inputB), 
	 .ALUop(E_ALUop), 
	 .ALUres(E_ALUres)
	 );
	 
	 EMreg EMreg (
	 .clk(clk), 
	 .reset(reset), 
	 .EM_en(EM_en), 
	 .EM_clear(EM_clear),
    .E_Instr(E_Instr), 
	 .E_PCplus8(E_PCplus8), 
	 .E_PC(E_PC),
    .E_ALUres(E_ALUres), 
	 .E_RD2(E_fixedRD2),
	 .E_A3(E_A3),
    .M_Instr(M_Instr), 
	 .M_PCplus8(M_PCplus8),
	 .M_PC(M_PC),
    .M_ALUres(M_ALUres), 
	 .M_RD2(M_RD2), 
	 .M_A3(M_A3));

    Controller MController (
	 .opcode(M_opcode),
	 .func(M_func),
	 .MemWrite(M_MemWrite),
    .ALUop(M_ALUop), 
	 .t_rs(M_t_rs), 
	 .t_rt(M_t_rt), 
	 .t(M_t)
	 );
	 
    DM DM (
	 .clk(clk), 
	 .reset(reset), 
	 .MemWrite(M_MemWrite), 
	 .MemAddr(M_MemAddr), 
	 .MemData(M_MemData),
    .DMdata(M_DMdata),
	 .PC(M_PC)
	 );
	 
	 MWreg MWreg (
	 .clk(clk), 
	 .reset(reset), 
	 .MW_en(MW_en), 
	 .MW_clear(MW_clear),
    .M_Instr(M_Instr), 
	 .M_PCplus8(M_PCplus8), 
	 .M_PC(M_PC),
    .M_A3(M_A3), 
	 .M_ALUres(M_ALUres),
	 .M_DMdata(M_DMdata),
    .W_Instr(W_Instr), 
	 .W_PCplus8(W_PCplus8), 
	 .W_PC(W_PC),
    .W_A3(W_A3), 
	 .W_ALUres(W_ALUres), 
	 .W_DMdata(W_DMdata)
	 );
    
    Controller WController (
	 .opcode(W_opcode), 
	 .func(W_func), 
	 .MemtoReg(W_MemtoReg),
    .RegWrite(W_RegWrite), 
	 .PCtoReg(W_PCtoReg), 
	 .ALUop(W_ALUop), 
    .t_rs(W_t_rs), 
	 .t_rt(W_t_rt), 
	 .t(W_t)
	 );
	 
	 assign D_fixedRD1 = (D_RD1_from_E_PCplus8) ? E_PCplus8 :
                        (D_RD1_from_M_PCplus8) ? M_PCplus8 :
                        (D_RD1_from_M) ? M_ALUres :
                        (D_RD1_from_W) ? W_WD : D_RD1;
    assign D_fixedRD2 = (D_RD2_from_E_PCplus8) ? E_PCplus8 :
                        (D_RD2_from_M_PCplus8) ? M_PCplus8 :
                        (D_RD2_from_M) ? M_ALUres :
                        (D_RD2_from_W) ? W_WD : D_RD2;
    assign E_fixedRD1 = (E_RD1_from_M_PCplus8) ? M_PCplus8 :
                        (E_RD1_from_M) ? M_ALUres :
                        (E_RD1_from_W) ? W_WD : E_RD1;
    assign E_fixedRD2 = (E_RD2_from_M_PCplus8) ? M_PCplus8 :
                        (E_RD2_from_M) ? M_ALUres :
                        (E_RD2_from_W) ? W_WD : E_RD2;
    assign M_fixedRD2 = (M_RD2_from_W) ? W_WD : M_RD2;
	 
	 assign D_t_rsuse = D_t_rs;
    assign D_t_rtuse = D_t_rt;
    assign D_t_new = D_t;

    assign E_t_rsuse = (E_t_rs == 4'hf) ? 4'hf :
                       (E_t_rs >= 4'h1) ? (E_t_rs - 4'h1) : 4'h0;
    assign E_t_rtuse = (E_t_rt == 4'hf) ? 4'hf :
                       (E_t_rt >= 4'h1) ? (E_t_rt - 4'h1) : 4'h0;
    assign E_t_new = (E_t == 4'hf) ? 4'hf :
                     (E_t >= 4'h1) ? (E_t - 4'h1) : 4'h0;

    assign M_t_rsuse = (M_t_rs == 4'hf) ? 4'hf :
                       (M_t_rs >= 4'h2) ? (M_t_rs - 4'h2) : 4'h0;
    assign M_t_rtuse = (M_t_rt == 4'hf) ? 4'hf :
                       (M_t_rt >= 4'h2) ? (M_t_rt - 4'h2) : 4'h0;
    assign M_t_new = (M_t == 4'hf) ? 4'hf :
                     (M_t >= 4'h2) ? (M_t - 4'h2) : 4'h0;

    assign W_t_rsuse = (W_t_rs == 4'hf) ? 4'hf :
                       (W_t_rs >= 4'h3) ? (W_t_rs - 4'h3) : 4'h0;
    assign W_t_rtuse = (W_t_rt == 4'hf) ? 4'hf :
                       (W_t_rt >= 4'h3) ? (W_t_rt - 4'h3) : 4'h0;
    assign W_t_new = (W_t == 4'hf) ? 4'hf :
                     (W_t >= 4'h3) ? (W_t - 4'h3) : 4'h0;
							
	 assign E_isPCplus8 = (E_ALUop == 6'b000111);
    assign M_isPCplus8 = (M_ALUop == 6'b000111);
	 
	 
	 //   isPCplus8?    $0?    start equal end?    tuse?    tnew?    tuse >= tnew?
	 assign D_RD1_from_E_PCplus8 = (E_isPCplus8 && E_A3 != 5'b00000 && D_rs == E_A3 && D_t_rsuse != 4'hf && E_t_new != 4'hf && D_t_rsuse >= E_t_new) ? 1'b1 : 1'b0;
    assign D_RD2_from_E_PCplus8 = (E_isPCplus8 && E_A3 != 5'b00000 && D_rt == E_A3 && D_t_rtuse != 4'hf && E_t_new != 4'hf && D_t_rtuse >= E_t_new) ? 1'b1 : 1'b0;
    
    assign D_RD1_from_M_PCplus8 = (M_isPCplus8 && M_A3 != 5'b00000 && D_rs == M_A3 && D_t_rsuse != 4'hf && M_t_new != 4'hf && D_t_rsuse >= M_t_new) ? 1'b1 : 1'b0;
    assign D_RD2_from_M_PCplus8 = (M_isPCplus8 && M_A3 != 5'b00000 && D_rt == M_A3 && D_t_rtuse != 4'hf && M_t_new != 4'hf && D_t_rtuse >= M_t_new) ? 1'b1 : 1'b0;
    assign E_RD1_from_M_PCplus8 = (M_isPCplus8 && M_A3 != 5'b00000 && E_rs == M_A3 && E_t_rsuse != 4'hf && M_t_new != 4'hf && E_t_rsuse >= M_t_new) ? 1'b1 : 1'b0;
    assign E_RD2_from_M_PCplus8 = (M_isPCplus8 && M_A3 != 5'b00000 && E_rt == M_A3 && E_t_rtuse != 4'hf && M_t_new != 4'hf && E_t_rtuse >= M_t_new) ? 1'b1 : 1'b0;
    
    assign D_RD1_from_M = (~M_isPCplus8 && M_A3 != 5'b00000 && D_rs == M_A3 && D_t_rsuse != 4'hf && M_t_new != 4'hf && D_t_rsuse >= M_t_new) ? 1'b1 : 1'b0;
    assign D_RD2_from_M = (~M_isPCplus8 && M_A3 != 5'b00000 && D_rt == M_A3 && D_t_rtuse != 4'hf && M_t_new != 4'hf && D_t_rtuse >= M_t_new) ? 1'b1 : 1'b0;
    assign E_RD1_from_M = (~M_isPCplus8 && M_A3 != 5'b00000 && E_rs == M_A3 && E_t_rsuse != 4'hf && M_t_new != 4'hf && E_t_rsuse >= M_t_new) ? 1'b1 : 1'b0;
    assign E_RD2_from_M = (~M_isPCplus8 && M_A3 != 5'b00000 && E_rt == M_A3 && E_t_rtuse != 4'hf && M_t_new != 4'hf && E_t_rtuse >= M_t_new) ? 1'b1 : 1'b0;
    
    assign D_RD1_from_W = (W_A3 != 5'b00000 && D_rs == W_A3 && D_t_rsuse != 4'hf && W_t_new != 4'hf && D_t_rsuse >= W_t_new) ? 1'b1 : 1'b0;
    assign D_RD2_from_W = (W_A3 != 5'b00000 && D_rt == W_A3 && D_t_rtuse != 4'hf && W_t_new != 4'hf && D_t_rtuse >= W_t_new) ? 1'b1 : 1'b0;
    assign E_RD1_from_W = (W_A3 != 5'b00000 && E_rs == W_A3 && E_t_rsuse != 4'hf && W_t_new != 4'hf && E_t_rsuse >= W_t_new) ? 1'b1 : 1'b0;
    assign E_RD2_from_W = (W_A3 != 5'b00000 && E_rt == W_A3 && E_t_rtuse != 4'hf && W_t_new != 4'hf && E_t_rtuse >= W_t_new) ? 1'b1 : 1'b0;
    assign M_RD2_from_W = (W_A3 != 5'b00000 && M_rt == W_A3 && M_t_rtuse != 4'hf && W_t_new != 4'hf && M_t_rtuse >= W_t_new) ? 1'b1 : 1'b0;
    
	 assign PC_en = (D_stall) ? 1'b0 : 1'b1;
    assign FD_en = (D_stall) ? 1'b0 : 1'b1;
    assign DE_en = 1'b1;
    assign EM_en = 1'b1;
    assign MW_en = 1'b1;
	 assign FD_clear = 1'b0;
    assign DE_clear = (D_stall) ? 1'b1 : 1'b0;
    assign EM_clear = 1'b0;
    assign MW_clear = 1'b0;
	 
	 assign D_stall = (E_A3 != 5'b00000 && D_rs == E_A3 && D_t_rsuse != 4'hf && E_t_new != 4'hf && D_t_rsuse < E_t_new) ? 1'b1 :
                     (E_A3 != 5'b00000 && D_rt == E_A3 && D_t_rtuse != 4'hf && E_t_new != 4'hf && D_t_rtuse < E_t_new) ? 1'b1 :
                     (M_A3 != 5'b00000 && D_rs == M_A3 && D_t_rsuse != 4'hf && M_t_new != 4'hf && D_t_rsuse < M_t_new) ? 1'b1 :
                     (M_A3 != 5'b00000 && D_rt == M_A3 && D_t_rtuse != 4'hf && M_t_new != 4'hf && D_t_rtuse < M_t_new) ? 1'b1 :
                     (W_A3 != 5'b00000 && D_rs == W_A3 && D_t_rsuse != 4'hf && W_t_new != 4'hf && D_t_rsuse < W_t_new) ? 1'b1 :
                     (W_A3 != 5'b00000 && D_rt == W_A3 && D_t_rtuse != 4'hf && W_t_new != 4'hf && D_t_rtuse < W_t_new) ? 1'b1 : 1'b0;
	 
endmodule
