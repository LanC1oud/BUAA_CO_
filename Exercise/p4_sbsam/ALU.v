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
	 input [31:0] inputC,
    input [5:0] ALUop,
    output [31:0] ALUres,
    output zero,
	 output [31:0] mask,
	 output [31:0] temp1
    );

wire [31:0] AaddB = (inputA + inputB);
wire [31:0] AsubB = (inputA - inputB);
wire [31:0] AorB = (inputA | inputB);
wire [31:0] Bleftshift16 = (inputB << 16);
wire [4:0] temp2,temp3,temp4;

assign temp2 = inputA[4:0];
assign temp3 = inputA[31:27];
assign temp4 = inputB[15:11];

assign temp1 = (inputC << temp2) + (inputC >> (32 - temp2));
assign mask = (temp3 >= temp4) ? ((32'hffffffff >> (32 - temp3 + temp4)) << temp4) : ~((32'hffffffff >> (32 - temp4 + temp3)) << temp3) ;

assign ALUres = (ALUop == 6'b000000) ? AaddB :
                 (ALUop == 6'b000001) ? AsubB :
                 (ALUop == 6'b000010) ? AorB :
                 (ALUop == 6'b000011) ? Bleftshift16:
                 (ALUop == 6'b000100) ? AaddB :
                 (ALUop == 6'b000101) ? AaddB : 
					  (ALUop == 6'b001001) ? AaddB : 32'h0000_0000;
                
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

