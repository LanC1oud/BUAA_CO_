`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:46:03 11/10/2025 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input [31:0] NPC,
    output [31:0] PC
    );
     
reg [31:0] regPC;

always@(posedge clk) begin
    if (reset) begin
        regPC <= 32'h0000_3000;
    end
    else begin
        regPC <= NPC;
    end
end

assign PC = regPC;

endmodule

