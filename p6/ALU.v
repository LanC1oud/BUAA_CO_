`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:05:47 11/04/2025 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] inputA,
    input [31:0] inputB,
    input [5:0] ALUop,
    output [31:0] ALUres
    );

parameter ADD = 6'b000000,
          SUB = 6'b000001,
          ORI = 6'b000010,
          LUI = 6'b000011,
          LW = 6'b000100,
          SW = 6'b000101,
			 LH = 6'b001001, 
			 SH = 6'b001010, 
			 LB = 6'b001011, 
			 SB = 6'b001100,
			 AND = 6'b010101,
			 OR = 6'b010110,
			 SLT = 6'b010111,
			 SLTU = 6'b011000,
		    ADDI = 6'b011001,
			 ANDI = 6'b011010;

wire [31:0] AaddB = (inputA + inputB);
wire [31:0] AsubB = (inputA - inputB);
wire [31:0] AorB = (inputA | inputB);
wire [31:0] Bleftshift16 = (inputB << 16);
wire [31:0] AandB = (inputA & inputB);
wire [31:0] AsltuB = (inputA < inputB) ? 32'h0000_0001 : 32'h0000_0000;
wire [31:0] AsltB = ($signed(inputA) < $signed(inputB)) ? 32'h0000_0001 : 32'h0000_0000;

assign ALUres = (ALUop == ADD || ALUop == ADDI) ? AaddB :
                (ALUop == SUB) ? AsubB :
                (ALUop == ORI || ALUop == OR) ? AorB :
					 (ALUop == AND || ALUop == ANDI) ? AandB :
                (ALUop == LUI) ? Bleftshift16:
                (ALUop == LW || ALUop == LH || ALUop == LB) ? AaddB :
                (ALUop == SW || ALUop == SH || ALUop == SB) ? AaddB :
					 (ALUop == SLT) ? AsltB :
					 (ALUop == SLTU) ? AsltuB : 32'h0000_0000;

endmodule

