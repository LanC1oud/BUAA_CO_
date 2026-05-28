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
	 
assign zero = ((ALUop == 6'b000110) && (inputA == inputB)) ? 1'b1 :
              ((ALUop == 6'b001001) && inputA[31] == 1'b1) ? 1'b1 : 1'b0;

endmodule
