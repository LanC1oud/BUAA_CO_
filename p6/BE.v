`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:45:50 11/18/2025 
// Design Name: 
// Module Name:    BE 
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
module BE(
    input [31:0] MemAddr,
    input [31:0] MemData,
    input [5:0] ALUop,
    output [3:0] MemByteWrite,
    output [31:0] fixed_data
    );

parameter SW = 6'b000101,
          SH = 6'b001010,
			 SB = 6'b001100;

assign MemByteWrite = (ALUop == SW) ? 4'b1111 :
							 (ALUop == SH && MemAddr[1] == 1'b0) ? 4'b0011 :
							 (ALUop == SH && MemAddr[1] == 1'b1) ? 4'b1100 :
							 (ALUop == SB && MemAddr[1:0] == 2'b00) ? 4'b0001 :
							 (ALUop == SB && MemAddr[1:0] == 2'b01) ? 4'b0010 :
							 (ALUop == SB && MemAddr[1:0] == 2'b10) ? 4'b0100 :
							 (ALUop == SB && MemAddr[1:0] == 2'b11) ? 4'b1000 : 4'b0000;
							 
assign fixed_data = (ALUop == SW) ? MemData :
						  (ALUop == SH && MemAddr[1] == 1'b0) ? {16'h0000,MemData[15:0]} :
						  (ALUop == SH && MemAddr[1] == 1'b1) ? {MemData[15:0],16'h0000} :
						  (ALUop == SB && MemAddr[1:0] == 2'b00) ? {24'h000000,MemData[7:0]} :
						  (ALUop == SB && MemAddr[1:0] == 2'b01) ? {16'h0000,MemData[7:0],8'h00} :
						  (ALUop == SB && MemAddr[1:0] == 2'b10) ? {8'h00,MemData[7:0],16'h0000} :
						  (ALUop == SB && MemAddr[1:0] == 2'b11) ? {MemData[7:0],24'h000000} : MemData;

endmodule
