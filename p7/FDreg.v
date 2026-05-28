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
	 input Req,
    input [31:0] F_Instr,
    input [31:0] F_PCplus8,
    input [31:0] F_PC,
	 input [4:0] F_ExcCode,
	 input F_BD,
    output reg [31:0] D_Instr,
    output reg [31:0] D_PCplus8,
    output reg [31:0] D_PC,
	 output reg [4:0] FD_ExcCode,
	 output reg D_BD
    );
	 
always @(posedge clk) begin
	if(reset || FD_clear || Req) begin
		D_Instr <= 32'h0;
		D_PCplus8 <= 32'h0;
		D_PC <= (reset) ? 32'h0000_3000 : (Req) ? 32'h0000_4180 : F_PC;
		D_BD <= (reset) ? 1'b0 : (Req) ? 1'b0 : F_BD;
		FD_ExcCode <= 5'b00000;
	end else begin
		if(FD_en) begin
			D_Instr <= F_Instr;
			D_PCplus8 <= F_PCplus8;
			D_PC <= F_PC;
			FD_ExcCode <= F_ExcCode;
			D_BD <= F_BD;
		end
	end
end

endmodule
