`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:02:11 11/04/2025 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input [31:0] WD,
    input RegWrite,
    input clk,
    input reset,
    input [4:0] A3,
    input [4:0] A1,
    input [4:0] A2,
    output [31:0] RD1,
    output [31:0] RD2,
	 input [31:0] PC
    );

reg [31:0] grf [0:31];
integer i;

always @(posedge clk) begin
	if(reset) begin
		for(i = 0; i < 32; i = i + 1) begin
			grf[i] <= 32'd0;
      end
	end else begin
		if(RegWrite && (A3 != 5'b00000)) begin
			grf[A3] <= WD;
		end
		grf[0] <= 32'd0;
	end
end

assign RD1 = (A1 == 5'b00000) ? 32'h0000_0000 : grf[A1];
assign RD2 = (A2 == 5'b00000) ? 32'h0000_0000 : grf[A2];

endmodule
