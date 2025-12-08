`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:03:37 11/11/2025 
// Design Name: 
// Module Name:    FDreg 
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
module FDreg(
    input clk,
    input reset,
    input FD_en,
    input FD_clear,
    input [31:0] F_Instr,
    input [31:0] F_PCplus8,
    input [31:0] F_PC,
    output reg [31:0] D_Instr,
    output reg [31:0] D_PCplus8,
    output reg [31:0] D_PC
    );
	 
always @(posedge clk) begin
	if(reset || FD_clear) begin
		D_Instr <= 32'h0;
		D_PCplus8 <= 32'h0;
		D_PC <= 32'h0;
	end else begin
		if(FD_en) begin
			D_Instr <= F_Instr;
			D_PCplus8 <= F_PCplus8;
			D_PC <= F_PC;
		end
	end
end

endmodule
