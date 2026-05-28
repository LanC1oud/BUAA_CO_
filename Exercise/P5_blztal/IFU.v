`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:23:55 11/04/2025 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
	 input reset,
    input clk,
	 input Branch,
	 input [31:0] imm32,
	 input jump,
	 input equal,
	 input [25:0] jump_addr,
    output reg [31:0] PC,
    output [31:0] Instr,
	 input [31:0] rsData,
	 input Jumptoreg
    );

reg [31:0] instruction [0:4095];
integer i;
wire beq = Branch & equal;
wire [31:0] NPC = PC + 32'd4;

initial begin 
	PC=32'h00003000;
	for(i = 0;i < 4096;i = i + 1) begin
		instruction[i] = 0;
	end
	$readmemh("code.txt",instruction);
end
	  
always @(posedge clk)begin
	if(reset) begin
		PC <= 32'h00003000;
	end else begin
		if(jump) begin
			if(Jumptoreg) begin
				PC <= rsData;
			end else begin
				PC <= {NPC[31:28],jump_addr[25:0],2'b00};
			end
		end else begin
			if(beq) begin
				PC <= NPC + (imm32 << 2);
			end else begin
				PC <= NPC;
			end
		end
	end
end

assign Instr = instruction[(PC - 32'h00003000) >> 2];

endmodule
