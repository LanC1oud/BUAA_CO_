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
	 input [1:0] bytee,
    output [31:0] DMdata,
	 output [31:0] DMres
    );

reg [31:0] dm [0:4095];  
wire [11:0] addr = MemAddr[13:2];
wire [3:0] temp;
wire [31:0] DMres;
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
wire byte0 = DMdata[8*bytee];
wire byte1 = DMdata[8*bytee+1];
wire byte2 = DMdata[8*bytee+2];
wire byte3 = DMdata[8*bytee+3];
wire byte4 = DMdata[8*bytee+4];
wire byte5 = DMdata[8*bytee+5];
wire byte6 = DMdata[8*bytee+6];
wire byte7 = DMdata[8*bytee+7];
assign temp = byte0+byte1+byte2+byte3+byte4+byte5+byte6+byte7;

assign DMres = (temp == 4) ? {{25{byte7}},byte6,byte5,byte4,byte3,byte2,byte1,byte0} : 32'h0000_0000;				  

always @(posedge clk) begin
	if(MemWrite && !reset) begin
		$display("@%h: *%h <= %h", PC, MemAddr, MemData);
	end
end

endmodule
