`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:12:51 11/11/2025 
// Design Name: 
// Module Name:    MWreg 
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
module MWreg(
    input clk,
    input reset,
    input MW_en,
    input MW_clear,
	 input Req,
    input [31:0] M_Instr,
    input [31:0] M_PCplus8,
    input [31:0] M_PC,
    input [4:0] M_A3,
    input [31:0] M_ALUres,
    input [31:0] M_DMdata,
    output reg [31:0] W_Instr,
    output reg [31:0] W_PCplus8,
    output reg [31:0] W_PC,
    output reg [4:0] W_A3,
    output reg [31:0] W_ALUres,
    output reg [31:0] W_DMdata
    );

always@(posedge clk) begin
    if(reset || MW_clear || Req) begin
        W_Instr <= 32'h0;
        W_PCplus8 <= 32'h0;
        W_PC <= 32'h0;
        W_A3 <= 5'b00000;
        W_ALUres <= 32'h0;
        W_DMdata <= 32'h0;
    end
    else begin
        if(MW_en) begin
            W_Instr <= M_Instr;
            W_PCplus8 <= M_PCplus8;
            W_PC <= M_PC;
            W_A3 <= M_A3;
            W_ALUres <= M_ALUres;
            W_DMdata <= M_DMdata;
        end
    end
end

endmodule

