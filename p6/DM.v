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
    input [3:0] MemByteWrite,
    input clk,
    input reset,
	 input [31:0] PC,
    output [31:0] DMdata
    );

reg [31:0] dm [0:4095];  
wire [31:0] addr = (MemAddr >> 2);
integer i;

always @(posedge clk) begin
	if(reset) begin
		for(i = 0; i < 4096; i = i + 1) begin
			dm[i] <= 32'h0000_0000;
		end
	end else begin
		if(MemByteWrite[0] == 1'b1) begin
			dm[addr][7:0] <= MemData[7:0];
		end
		if(MemByteWrite[1] == 1'b1) begin
			dm[addr][15:8] <= MemData[15:8];
		end
		if(MemByteWrite[2] == 1'b1) begin
			dm[addr][23:16] <= MemData[23:16];
		end
		if(MemByteWrite[3] == 1'b1) begin
			dm[addr][31:24] <= MemData[31:24];
		end
	end
end

assign DMdata = dm[addr];

always @(posedge clk) begin
	if(MemByteWrite && !reset) begin
		$display("%d@%h: *%h <= %h", $time, PC, MemAddr, MemData);
	end
end

endmodule
