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
    output [31:0] DMdata,
	 input [31:0] mask,
	 input Sbsam,
	 input [31:0] temp1
    );

reg [31:0] dm [0:4095];  
wire [11:0] addr = MemAddr[13:2];
wire [1:0] bytee = MemAddr[1:0];
integer i;

wire [31:0] TempMW = (bytee == 2'b00) ? {dm[addr][31:8],(mask[7:0]&temp1[7:0])} :
				  (bytee == 2'b01) ? {dm[addr][31:16],(mask[15:8]&temp1[15:8]),dm[addr][7:0]} : 
				  (bytee == 2'b10) ? {dm[addr][31:24],(mask[23:16]&temp1[23:16]),dm[addr][15:0]} :
				  (bytee == 2'b11) ? {(mask[31:24]&temp1[31:24]),dm[addr][23:0]} : 32'h0000_0000;

always @(posedge clk) begin
	if(reset) begin
		for(i = 0; i < 4096; i = i + 1) begin
			dm[i] <= 32'h0000_0000;
		end
	end else begin
		if(MemWrite) begin
			dm[addr] <= (Sbsam) ? TempMW : MemData;
		end
	end
end

assign DMdata = dm[addr];

always @(posedge clk) begin
	if(MemWrite && !reset) begin
		$display("@%h: *%h <= %h", PC, MemAddr - bytee, (Sbsam) ? TempMW : MemData);
	end
end

endmodule
