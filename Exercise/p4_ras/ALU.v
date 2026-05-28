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
wire [31:0] ArasB = (inputB == 0) ? inputA :
						  (inputB < 32'd32) ? res1 : res2;
					  
wire [31:0] temp1 = (32'hffff_ffff << (32 - inputB))^inputA;
wire [31:0] temp2 = ~inputA;
wire [31:0] res1 = (temp1[31] == 1) ? (temp1 >> s) + (32'hffff_ffff << (32 - s)) : temp1 >> s; 
wire [31:0] res2 = (temp2[31] == 1) ? (temp2 >> s) + (32'hffff_ffff << (32 - s)) : temp2 >> s; 
wire [5:0] s = inputB[31] + inputB[30] + inputB[29] + inputB[28] +
			inputB[27] + inputB[26] + inputB[25] + inputB[24] +
			inputB[23] + inputB[22] + inputB[21] + inputB[20] +
			inputB[19] + inputB[18] + inputB[17] + inputB[16] +
			inputB[15] + inputB[14] + inputB[13] + inputB[12] +
			inputB[11] + inputB[10] + inputB[9] + inputB[8] +
			inputB[7] + inputB[6] + inputB[5] + inputB[4] +
			inputB[3] + inputB[2] + inputB[1] + inputB[0];

assign ALUres = (ALUop == 6'b000000) ? AaddB :
                 (ALUop == 6'b000001) ? AsubB :
                 (ALUop == 6'b000010) ? AorB :
                 (ALUop == 6'b000011) ? Bleftshift16:
                 (ALUop == 6'b000100) ? AaddB :
                 (ALUop == 6'b000101) ? AaddB :
					  (ALUop == 6'b001001) ? ArasB : 32'h0000_0000;
                
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

