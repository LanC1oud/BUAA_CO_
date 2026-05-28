`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:46:52 11/10/2025 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [31:0] F_PC,
    input [15:0] imm16,
    input [25:0] imm26,
    input [31:0] GRF,
    input [1:0] NPC_Sel,
    input zero,
    output [31:0] NPC
    );
    
parameter PCPLUS4 = 2'b00;
parameter IMM26 = 2'b01;
parameter GRFconst = 2'b10;
parameter IMM16 = 2'b11;
    
wire [31:0] sign_ext = {{14{imm16[15]}}, imm16, 2'b00};
wire [31:0] NPC_PCplus4 = F_PC + 32'h00000004;;
wire [31:0] NPC_imm16 = F_PC + sign_ext;
wire [31:0] NPC_imm26 = {F_PC[31:28], imm26, 2'b00};
wire [31:0] NPC_GRF = GRF;

assign NPC = (NPC_Sel == PCPLUS4) ? NPC_PCplus4 :
             (NPC_Sel == IMM26) ? NPC_imm26 :
             (NPC_Sel == GRFconst) ? NPC_GRF :
             (NPC_Sel == IMM16 && zero) ? NPC_imm16 : NPC_PCplus4;

endmodule

