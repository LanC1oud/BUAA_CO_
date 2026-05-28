`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:17:29 11/11/2025 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input [31:0] inputA,
    input [31:0] inputB,
    input [5:0] ALUop,
    output zero
    );

parameter BEQ = 6'b000110;
parameter BNE = 6'b011011;	 
	 
assign zero = ((ALUop == BEQ) && (inputA == inputB)) ? 1'b1 :
				  ((ALUop == BNE) && (inputA != inputB)) ? 1'b1 : 1'b0;

endmodule
