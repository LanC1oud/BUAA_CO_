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
    output [31:0] ALUres,
    output zero
    );

wire [31:0] AaddB = (inputA + inputB);
wire [31:0] AsubB = (inputA - inputB);
wire [31:0] AorB = (inputA | inputB);
wire [31:0] Bleftshift16 = (inputB << 16);
wire [31:0] AsszeB = (temp1 == temp2) ? 32'h0000_0001 : 32'h0000_0000;
wire [5:0] temp1,temp2;

assign temp1 = (inputA == 32'h0) ? 6'd32 :
                     (inputA[0]) ? 6'd0 :
                     (inputA[1]) ? 6'd1 :
                     (inputA[2]) ? 6'd2 :
                     (inputA[3]) ? 6'd3 :
                     (inputA[4]) ? 6'd4 :
                     (inputA[5]) ? 6'd5 :
                     (inputA[6]) ? 6'd6 :
                     (inputA[7]) ? 6'd7 :
                     (inputA[8]) ? 6'd8 :
                     (inputA[9]) ? 6'd9 :
                     (inputA[10]) ? 6'd10 :
                     (inputA[11]) ? 6'd11 :
                     (inputA[12]) ? 6'd12 :
                     (inputA[13]) ? 6'd13 :
                     (inputA[14]) ? 6'd14 :
                     (inputA[15]) ? 6'd15 :
                     (inputA[16]) ? 6'd16 :
                     (inputA[17]) ? 6'd17 :
                     (inputA[18]) ? 6'd18 :
                     (inputA[19]) ? 6'd19 :
                     (inputA[20]) ? 6'd20 :
                     (inputA[21]) ? 6'd21 :
                     (inputA[22]) ? 6'd22 :
                     (inputA[23]) ? 6'd23 :
                     (inputA[24]) ? 6'd24 :
                     (inputA[25]) ? 6'd25 :
                     (inputA[26]) ? 6'd26 :
                     (inputA[27]) ? 6'd27 :
                     (inputA[28]) ? 6'd28 :
                     (inputA[29]) ? 6'd29 :
                     (inputA[30]) ? 6'd30 : 6'd31;

assign temp2 = (inputB == 32'h0) ? 6'd32 :
                     (inputB[0]) ? 6'd0 :
                     (inputB[1]) ? 6'd1 :
                     (inputB[2]) ? 6'd2 :
                     (inputB[3]) ? 6'd3 :
                     (inputB[4]) ? 6'd4 :
                     (inputB[5]) ? 6'd5 :
                     (inputB[6]) ? 6'd6 :
                     (inputB[7]) ? 6'd7 :
                     (inputB[8]) ? 6'd8 :
                     (inputB[9]) ? 6'd9 :
                     (inputB[10]) ? 6'd10 :
                     (inputB[11]) ? 6'd11 :
                     (inputB[12]) ? 6'd12 :
                     (inputB[13]) ? 6'd13 :
                     (inputB[14]) ? 6'd14 :
                     (inputB[15]) ? 6'd15 :
                     (inputB[16]) ? 6'd16 :
                     (inputB[17]) ? 6'd17 :
                     (inputB[18]) ? 6'd18 :
                     (inputB[19]) ? 6'd19 :
                     (inputB[20]) ? 6'd20 :
                     (inputB[21]) ? 6'd21 :
                     (inputB[22]) ? 6'd22 :
                     (inputB[23]) ? 6'd23 :
                     (inputB[24]) ? 6'd24 :
                     (inputB[25]) ? 6'd25 :
                     (inputB[26]) ? 6'd26 :
                     (inputB[27]) ? 6'd27 :
                     (inputB[28]) ? 6'd28 :
                     (inputB[29]) ? 6'd29 :
                     (inputB[30]) ? 6'd30 : 6'd31;							


assign ALUres = (ALUop == 6'b000000) ? AaddB :
                 (ALUop == 6'b000001) ? AsubB :
                 (ALUop == 6'b000010) ? AorB :
                 (ALUop == 6'b000011) ? Bleftshift16:
                 (ALUop == 6'b000100) ? AaddB :
                 (ALUop == 6'b000101) ? AaddB : 
					  (ALUop == 6'b001001) ? AsszeB : 32'h0000_0000;
					  
                
assign zero = ((ALUop == 6'b000110) && (inputA == inputB)) ? 1'b1 : 1'b0;

/*
              (add) ? 6'b000000 :
              (sub) ? 6'b000001 :
              (ori) ? 6'b000010 :
              (lui) ? 6'b000011 :
              (lw) ? 6'b000100 :
              (sw) ? 6'b000101 :
              (beq) ? 6'b000110 :
              (jal) ? 6'b000111 :
              (jr) ? 6'b001000 : 6'b11111;
*/

endmodule

