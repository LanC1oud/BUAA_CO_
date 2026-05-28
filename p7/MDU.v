`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:00 11/18/2025 
// Design Name: 
// Module Name:    MDU 
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
module MDU(
    input clk,
    input reset,
    input [31:0] inputA,
    input [31:0] inputB,
    input [5:0] ALUop,
	 input start,
	 input Req,
    output [31:0] MDUres,
	 output busy
    );

reg [31:0] HI;
reg [31:0] LO;
reg [31:0] lastHI;
reg [31:0] lastLO;
reg [3:0] count;

parameter MULT = 6'b001101,
			 MULTU = 6'b001110,
			 DIV = 6'b001111,
			 DIVU = 6'b010000,
			 MFHI = 6'b010001,
			 MFLO = 6'b010010,
			 MTHI = 6'b010011,
			 MTLO = 6'b010100;

always @(posedge clk) begin
	if(reset) begin
		HI <= 32'h0000_0000;
		LO <= 32'h0000_0000;
		lastHI <= 32'h0000_0000;
		lastLO <= 32'h0000_0000;
		count <= 4'h0;
	end else if(~Req) begin
		if(ALUop == MTHI) begin
			HI <= inputA;
		end else if(ALUop == MTLO) begin
			LO <= inputA;
		end else if(ALUop == MULT) begin
			{HI,LO} <= $signed(inputA) * $signed(inputB);
		end else if(ALUop == MULTU) begin
			{HI,LO} <= inputA * inputB;
		end else if(ALUop == DIV) begin
			if(inputB != 32'h0000_0000) begin
				HI <= $signed(inputA) % $signed(inputB);
				LO <= $signed(inputA) / $signed(inputB);
			end
      end else if(ALUop == DIVU) begin
			if(inputB != 32'h0000_0000) begin
				HI <= inputA % inputB;
				LO <= inputA / inputB;
			end
		end

		if(start) begin
			if(ALUop == MULT || ALUop == MULTU) begin
				count <= 4'h5;
			end else if(ALUop == DIV || ALUop == DIVU) begin
				count <= 4'ha;
			end
		end
		
		if(count != 4'h0) begin
			count <= count - 4'h1;
		end
	end else begin
		HI <= lastHI; 
		LO <= lastLO;
	end
	lastHI <= HI;
	lastLO <= LO;
end

assign MDUres = (ALUop == MFHI) ? HI :
					 (ALUop == MFLO) ? LO : 32'h0000_0000;
assign busy = (count != 4'h0) ? 1'b1 : 1'b0;

endmodule
