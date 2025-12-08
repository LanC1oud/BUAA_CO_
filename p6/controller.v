`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:31 11/03/2025 
// Design Name: 
// Module Name:    controller 
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
module Controller(
    input [5:0] opcode,
    input [5:0] func,
    output RegWrite,
    output RegDst,
    output ALUsrc,
    output MemtoReg,
    output EXTop,
	 output [1:0] NPC_Sel,
    output [5:0] ALUop,
	 output PCtoReg,
	 output Regra,
	 output [3:0] t_rs,
	 output [3:0] t_rt,
	 output [3:0] t,
	 output MDUsignal,
	 output start
    );
	 
	 wire add=(opcode==6'b000000&&func==6'b100000);
	 wire sub=(opcode==6'b000000&&func==6'b100010);
	 wire ori=(opcode==6'b001101);
	 wire lw=(opcode==6'b100011);
	 wire sw=(opcode==6'b101011);
	 wire beq=(opcode==6'b000100);
	 wire lui=(opcode==6'b001111);
	 wire jal=(opcode==6'b000011);
	 wire jr=(opcode==6'b000000&&func==6'b001000);
	 wire nop=(opcode==6'b000000&&func==6'b000000); 
	 wire lh=(opcode==6'b100001);
	 wire lb=(opcode==6'b100000);
	 wire sh=(opcode==6'b101001);
	 wire sb=(opcode==6'b101000);
	 wire mult=(opcode==6'b000000&&func==6'b011000);
	 wire multu=(opcode==6'b000000&&func==6'b011001);
	 wire div=(opcode==6'b000000&&func==6'b011010);
	 wire divu=(opcode==6'b000000&&func==6'b011011);
	 wire mfhi=(opcode==6'b000000&&func==6'b010000);
	 wire mflo=(opcode==6'b000000&&func	==6'b010010);
	 wire mthi=(opcode==6'b000000&&func==6'b010001);
	 wire mtlo=(opcode==6'b000000&&func==6'b010011);
	 wire andd=(opcode==6'b000000&&func==6'b100100);
	 wire orr=(opcode==6'b000000&&func==6'b100101);
	 wire slt=(opcode==6'b000000&&func==6'b101010);
	 wire sltu=(opcode==6'b000000&&func==6'b101011);
	 wire addi=(opcode==6'b001000);
	 wire andi=(opcode==6'b001100);
	 wire bne=(opcode==6'b000101);
	 
	 assign RegWrite = add | sub | ori | lw | lh | lb | lui | jal | andd | orr | slt | sltu | addi | andi | mfhi | mflo;
	 assign RegDst = add | sub | andd | orr | slt | sltu | mfhi | mflo;
	 assign ALUsrc = ori | lui | lw | sw | lh | sh | lb | sb | addi | andi;
	 assign MemtoReg = lw | lh | lb;
	 assign EXTop = lw | sw | lh | sh | lb | sb | addi;
	 assign Regra = jal;
	 assign PCtoReg = jal;
	 assign MDUsignal = mfhi | mflo;
	 assign start = mult | multu | div | divu;
	 assign NPC_Sel = 
	              (jal) ? 2'b01 :
                 (jr) ? 2'b10 :
                 (beq | bne) ? 2'b11 : 2'b00;
	
	 parameter ADD = 6'b000000,
              SUB = 6'b000001,
              ORI = 6'b000010,
              LUI = 6'b000011,
              LW = 6'b000100,
              SW = 6'b000101,
              BEQ = 6'b000110,
              JAL = 6'b000111,
              JR = 6'b001000, 
				  LH = 6'b001001, 
				  SH = 6'b001010, 
				  LB = 6'b001011, 
				  SB = 6'b001100,
				  MULT = 6'b001101,
				  MULTU = 6'b001110,
				  DIV = 6'b001111,
				  DIVU = 6'b010000,
				  MFHI = 6'b010001,
				  MFLO = 6'b010010,
				  MTHI = 6'b010011,
				  MTLO = 6'b010100,
				  AND = 6'b010101,
				  OR = 6'b010110,
				  SLT = 6'b010111,
				  SLTU = 6'b011000,
				  ADDI = 6'b011001,
				  ANDI = 6'b011010,
				  BNE = 6'b011011;
    assign ALUop = 
	           (add) ? ADD :
              (sub) ? SUB :
              (ori) ? ORI :
              (lui) ? LUI :
              (lw) ? LW :
              (sw) ? SW :
              (beq) ? BEQ :
              (jal) ? JAL :
              (jr) ? JR : 
				  (lh) ? LH : 
				  (sh) ? SH : 
				  (lb) ? LB : 
				  (sb) ? SB :
				  (mult) ? MULT :
              (multu) ? MULTU :
              (div) ? DIV :
              (divu) ? DIVU :
              (mfhi) ? MFHI :
              (mflo) ? MFLO :
              (mthi) ? MTHI :
              (mtlo) ? MTLO :
				  (andd) ? AND :
				  (orr) ? OR :
				  (slt) ? SLT :
				  (sltu) ? SLTU :
				  (addi) ? ADDI :
				  (andi) ? ANDI :
				  (bne) ? BNE : 6'b111111;
				  
    assign t_rs = (add | andd | orr | slt | sltu) ? 4'h1 :
	               (sub) ? 4'h1 :
						(ori | andi | addi) ? 4'h1 :
						(lui) ? 4'hf :
						(lw | lh | lb) ? 4'h1 :
						(sw | sh | sb) ? 4'h1 :
						(beq | bne) ? 4'h0 :
						(jal) ? 4'hf :
						(jr) ? 4'h0 :
						(mult | multu) ? 4'h1 :
                  (div | divu) ? 4'h1 :
                  (mfhi | mflo) ? 4'hf :
                  (mthi | mtlo) ? 4'h1 : 4'hf;
						
    assign t_rt = (add | andd | orr | slt | sltu) ? 4'h1 :
	               (sub) ? 4'h1 :
						(ori | andi | addi) ? 4'hf :
						(lui) ? 4'hf :
						(lw | lh | lb) ? 4'hf :
						(sw | sh | sb) ? 4'h2 :
						(beq | bne) ? 4'h0 :
						(jal) ? 4'hf :
						(jr) ? 4'hf :
						(mult | multu) ? 4'h1 :
                  (div | divu) ? 4'h1 :
                  (mfhi | mflo) ? 4'hf :
                  (mthi | mtlo) ? 4'h1 : 4'hf;
						
    assign t = (add | andd | orr | slt | sltu) ? 4'h2 :
	            (sub) ? 4'h2 :
					(ori | andi | addi) ? 4'h2 :
					(lui) ? 4'h2 :
					(lw | lh | lb) ? 4'h3 :
					(sw | sh | sb) ? 4'hf :
					(beq | bne) ? 4'hf :
					(jal) ? 4'h0 :
					(jr) ? 4'hf :
               (mult | multu) ? 4'hf :
               (div | divu) ? 4'hf :
               (mfhi | mflo) ? 4'h2 :
               (mthi | mtlo) ? 4'hf : 4'hf;					

endmodule
