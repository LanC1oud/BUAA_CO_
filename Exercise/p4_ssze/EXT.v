`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:12:35 11/04/2025 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm16,
    input EXTop,
    output reg [31:0] ext32
    );
	 
always @(*) begin
	case(EXTop)
		1'b0: begin
			ext32 = {16'h0000,imm16};
		end
		1'b1: begin
			ext32 = {{16{imm16[15]}},imm16};
		end
	endcase
end


endmodule
