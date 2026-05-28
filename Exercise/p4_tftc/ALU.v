`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:05:47 11/04/2025 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] inputA,
    input [31:0] inputB,
    input [5:0] ALUop,
    output [31:0] ALUres,
    output zero
    );

wire [31:0] AaddB = (inputA + inputB);
wire [31:0] AsubB = (inputA - inputB);
wire [31:0] AorB = (inputA | inputB);
wire [31:0] Bleftshift16 = (inputB << 16);
wire [31:0] Atftc;

assign Atftc[31] = (inputA == 32'h8000_0000) ? 1'b0 : inputA[31];
assign Atftc[30:0] = (inputA[31] == 1'b1) ? (~(inputA[30:0]) + 1'b1) : inputA[30:0];

assign ALUres = (ALUop == 6'b000000) ? AaddB :
                 (ALUop == 6'b000001) ? AsubB :
                 (ALUop == 6'b000010) ? AorB :
                 (ALUop == 6'b000011) ? Bleftshift16:
                 (ALUop == 6'b000100) ? AaddB :
                 (ALUop == 6'b000101) ? AaddB : 
					  (ALUop == 6'b001001) ? Atftc : 32'h0000_0000;
                
assign zero = ((ALUop == 6'b000110) && (inputA == inputB)) ? 1'b1 : 1'b0;

/*
              (add) ? 6'b000000 :
              (sub) ? 6'b000001 :
              (ori) ? 6'b000010 :
              (lui) ? 6'b000011 :
              (lw) ? 6'b000100 :
              (sw) ? 6'b000101 :
              (beq) ? 6'b000110 :
              (jal) ? 6'b000111 :
              (jr) ? 6'b001000 : 6'b11111;
*/

endmodule

