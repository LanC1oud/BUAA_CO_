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

    wire [31:0] pc;
    wire [31:0] npc;
    wire [31:0] pcplus4;

    wire [31:0] Instr;
    wire [5:0] opcode;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;
    wire [4:0] shamt;
    wire [5:0] func;
    wire [15:0] imm16;
    wire [25:0] imm26;
	 
    wire [1:0] NPC_Sel;
    wire RegWrite;
    wire EXTop;
    wire ALUsrc;
    wire RegDst;
    wire MemWrite;
    wire MemtoReg;
	 wire PCtoReg;
	 wire Regra;
	 wire PCADD;
    wire [5:0] ALUop;

    wire [4:0] A1;
    wire [4:0] A2;
    wire [4:0] A3;
    wire [31:0] WD;
    wire [31:0] RD1;
    wire [31:0] RD2;

    wire [31:0] ext32;

    wire [31:0] inputA;
    wire [31:0] inputB;
    wire [31:0] ALUres;
    wire zero;

    wire [31:0] MemAddr;
    wire [31:0] MemData;
    wire [31:0] DMdata;

	 assign pcplus4 = pc + 32'h0000_0004;
    assign A1 = rs;
    assign A2 = rt;
    assign A3 = (Regra) ? 5'b11111 :
                (RegDst) ? rd : rt;
    assign WD = (PCtoReg) ? pcplus4 :
                (MemtoReg) ? DMdata : ALUres;
    assign inputA = RD1;
    assign inputB = (PCADD) ? pc :
						  (ALUsrc) ? ext32 : RD2;
    assign MemAddr = ALUres;
    assign MemData = RD2;
    
    PC PC (
	 .clk(clk), 
	 .reset(reset), 
	 .NPC(npc), 
	 .PC(pc)
	 );
	 
    NPC NPC (
	 .PC(pc), 
	 .NPC_Sel(NPC_Sel), 
	 .zero(zero), 
	 .imm16(imm16), 
    .imm26(imm26), 
	 .GRF(inputA), 
	 .NPC(npc)
	 );
	 
    IM IM (
	 .addr(pc), 
	 .Instr(Instr)
	 );
	 
    Controller Controller (
	 .opcode(opcode), 
	 .func(func), 
	 .RegDst(RegDst),
    .ALUsrc(ALUsrc), 
	 .MemtoReg(MemtoReg), 
	 .RegWrite(RegWrite),
    .MemWrite(MemWrite),
	 .NPC_Sel(NPC_Sel), 
	 .EXTop(EXTop),
	 .Regra(Regra),
	 .ALUop(ALUop),
	 .PCtoReg(PCtoReg),
	 .PCADD(PCADD)
	 );
	 
    GRF GRF (
	 .clk(clk),
	 .reset(reset), 
	 .RegWrite(RegWrite), 
	 .A1(A1), 
	 .A2(A2),
    .A3(A3), 
	 .WD(WD), 
	 .RD1(RD1), 
	 .RD2(RD2),
	 .PC(pc)
	 );
	 
    EXT EXT (
	 .imm16(imm16),
	 .EXTop(EXTop),
	 .ext32(ext32)
	 );
	 
    ALU ALU (
	 .inputA(inputA), 
	 .inputB(inputB), 
	 .ALUop(ALUop), 
	 .ALUres(ALUres),
    .zero(zero)
	 );
	 
    DM DM (
	 .clk(clk), 
	 .reset(reset), 
	 .MemWrite(MemWrite), 
	 .MemAddr(MemAddr), 
	 .MemData(MemData),
    .DMdata(DMdata),
	 .PC(pc)
	 );
	 
	 Splitter Splitter (
	 .Instr(Instr),
	 .opcode(opcode),
	 .rs(rs),
	 .rt(rt),
	 .rd(rd),
	 .shamt(shamt),
	 .func(func),
	 .imm16(imm16),
	 .imm26(imm26)
	 );
    
endmodule
