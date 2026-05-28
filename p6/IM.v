`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:48:53 11/10/2025 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] addr,
    output [31:0] Instr
    );
    
reg [31:0] ROM [0:4095];
    
wire [31:0] InstrAddr;

initial begin
    $readmemh("code.txt", ROM, 0, 4095);
end

assign InstrAddr = ((addr - 32'h00003000) >> 2);
assign Instr = ROM[InstrAddr];

endmodule

