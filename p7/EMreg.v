`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:24 11/11/2025 
// Design Name: 
// Module Name:    EMreg 
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
module EMreg(
    input clk,
    input reset,
    input EM_en,
    input EM_clear,
	 input Req,
    input [31:0] E_Instr,
    input [31:0] E_PCplus8,
    input [31:0] E_PC,
    input [31:0] E_ALUres,
    input [31:0] E_RD2,
    input [4:0] E_A3,
	 input [4:0] E_ExcCode,
	 input E_BD,
    output reg [31:0] M_Instr,
    output reg [31:0] M_PCplus8,
    output reg [31:0] M_PC,
    output reg [31:0] M_ALUres,
    output reg [31:0] M_RD2,
    output reg [4:0] M_A3,
	 output reg [4:0] EM_ExcCode,
	 output reg M_BD
    );

always@(posedge clk) begin
    if(reset || EM_clear || Req) begin
        M_Instr <= 32'h0;
        M_PCplus8 <= 32'h0;
        M_PC <= (reset) ? 32'h0000_3000 : (Req) ? 32'h0000_4180 : E_PC;
		  M_BD <= (reset) ? 1'b0 : (Req) ? 1'b0 : E_BD;
        M_ALUres <= 32'h0;
        M_RD2 <= 32'h0;
        M_A3 <= 5'b00000;
		  EM_ExcCode <= 5'b00000;
    end
    else begin
        if(EM_en) begin
            M_Instr <= E_Instr;
            M_PCplus8 <= E_PCplus8;
            M_PC <= E_PC;
            M_ALUres <= E_ALUres;
            M_RD2 <= E_RD2;
            M_A3 <= E_A3;
				M_BD <= E_BD;
				EM_ExcCode <= E_ExcCode;
        end
    end
end

endmodule

