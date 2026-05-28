`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:17:05 11/18/2025 
// Design Name: 
// Module Name:    DE 
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
module DE(
    input [31:0] MemAddr,
    input [31:0] MemData,
    input [5:0] ALUop,
    output [31:0] fixed_data
    );

parameter LW = 6'b000100,
			 LH = 6'b001001,
			 LB = 6'b001011;
	 
wire [15:0] half_data;
wire [7:0] byte_data;

assign half_data = (ALUop == LH && MemAddr[1] == 1'b0) ? MemData[15:0] :
						 (ALUop == LH && MemAddr[1] == 1'b1) ? MemData[31:16] : 16'h0000;

assign byte_data = (ALUop == LB && MemAddr[1:0] == 2'b00) ? MemData[7:0] : 
                   (ALUop == LB && MemAddr[1:0] == 2'b01) ? MemData[15:8] : 
                   (ALUop == LB && MemAddr[1:0] == 2'b10) ? MemData[23:16] : 
                   (ALUop == LB && MemAddr[1:0] == 2'b11) ? MemData[31:24] : 8'h00;                       
                       
assign fixed_data = (ALUop == LW) ? MemData :
                    (ALUop == LH) ? {{16{half_data[15]}}, half_data} : 
                    (ALUop == LB) ? {{24{byte_data[7]}}, byte_data} : MemData;

endmodule
