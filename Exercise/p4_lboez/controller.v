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
    output MemWrite,
    output MemtoReg,
    output EXTop,
	 output [1:0] NPC_Sel,
    output [5:0] ALUop,
	 output PCtoReg,
	 output Regra,
	 output LBOEZ
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
	 wire lboez=(opcode==6'b111110);
	 
	 assign RegWrite = add | sub | ori | lw | lui | jal | lboez;
	 assign RegDst = add | sub;
	 assign ALUsrc = ori | lui | lw | sw | lboez;
	 assign MemWrite = sw;
	 assign MemtoReg = lw | lboez;
	 assign EXTop = lw | sw | lboez;
	 assign Regra = jal;
	 assign PCtoReg = jal;
	 assign LBOEZ = lboez;
	 assign NPC_Sel = 
	              (jal) ? 2'b01 :
                 (jr) ? 2'b10 :
                 (beq) ? 2'b11 : 2'b00;
    assign ALUop = 
	           (add) ? 6'b000000 :
              (sub) ? 6'b000001 :
              (ori) ? 6'b000010 :
              (lui) ? 6'b000011 :
              (lw) ? 6'b000100 :
              (sw) ? 6'b000101 :
              (beq) ? 6'b000110 :
              (jal) ? 6'b000111 :
              (jr) ? 6'b001000 :
				  (lboez) ? 6'b001001 : 6'b111111;

endmodule
