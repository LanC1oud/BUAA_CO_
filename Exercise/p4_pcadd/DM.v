`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:44:07 11/04/2025 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] MemAddr,
    input [31:0] MemData,
    input MemWrite,
    input clk,
    input reset,
	 input [31:0] PC,
    output [31:0] DMdata
    );

reg [31:0] dm [0:4095];  
wire [11:0] addr = MemAddr[13:2];
integer i;

always @(posedge clk) begin
	if(reset) begin
		for(i = 0; i < 4096; i = i + 1) begin
			dm[i] <= 32'h0000_0000;
		end
	end else begin
		if(MemWrite) begin
			dm[addr] <= MemData;
		end
	end
end

assign DMdata = dm[addr];

always @(posedge clk) begin
	if(MemWrite && !reset) begin
		$display("@%h: *%h <= %h", PC, MemAddr, MemData);
	end
end

endmodule
