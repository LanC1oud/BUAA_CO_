`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:56:31 11/03/2025 
// Design Name: 
// Module Name:    controller 
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
module Controller(
    input [5:0] opcode,
    input [5:0] func,
    output RegWrite,
    output RegDst,
    output ALUsrc,
    output MemWrite,
    output MemtoReg,
    output EXTop,
	 output [2:0] NPC_Sel,
    output [5:0] ALUop,
	 output PCtoReg,
	 output Regra,
	 output [3:0] t_rs,
	 output [3:0] t_rt,
	 output [3:0] t
    );
	 
	 wire add=(opcode==6'b000000&&func==6'b100000);
	 wire sub=(opcode==6'b000000&&func==6'b100010);
	 wire ori=(opcode==6'b001101);
	 wire lw=(opcode==6'b100011);
	 wire sw=(opcode==6'b101011);
	 wire beq=(opcode==6'b000100);
	 wire lui=(opcode==6'b001111);
	 wire jal=(opcode==6'b000011);
	 wire jr=(opcode==6'b000000&&func==6'b001000);
	 wire nop=(opcode==6'b000000&&func==6'b000000);
	 wire blztal=(opcode==6'b100111);
	 
	 assign RegWrite = add | sub | ori | lw | lui | jal | blztal;
	 assign RegDst = add | sub;
	 assign ALUsrc = ori | lui | lw | sw | blztal;
	 assign MemWrite = sw;
	 assign MemtoReg = lw;
	 assign EXTop = lw | sw | blztal;
	 assign Regra = jal | blztal;
	 assign PCtoReg = jal | blztal;
	 assign NPC_Sel = 
	              (jal) ? 3'b001 :
                 (jr) ? 3'b010 :
                 (beq) ? 3'b011 : 
					  (blztal) ? 3'b100 : 3'b000;
    assign ALUop = 
	           (add) ? 6'b000000 :
              (sub) ? 6'b000001 :
              (ori) ? 6'b000010 :
              (lui) ? 6'b000011 :
              (lw) ? 6'b000100 :
              (sw) ? 6'b000101 :
              (beq) ? 6'b000110 :
              (jal) ? 6'b000111 :
              (jr) ? 6'b001000 :
              (blztal) ? 6'b001001 : 6'b111111;
    assign t_rs = (add) ? 4'h1 :
	               (sub) ? 4'h1 :
						(ori) ? 4'h1 :
						(lui) ? 4'hf :
						(lw) ? 4'h1 :
						(sw) ? 4'h1 :
						(beq | blztal) ? 4'h0 :
						(jal) ? 4'hf :
						(jr) ? 4'h0 : 4'hf;
    assign t_rt = (add) ? 4'h1 :
	               (sub) ? 4'h1 :
						(ori) ? 4'hf :
						(lui) ? 4'hf :
						(lw) ? 4'hf :
						(sw) ? 4'h2 :
						(beq | blztal) ? 4'h0 :
						(jal) ? 4'hf :
						(jr) ? 4'hf : 4'hf;
    assign t = (add) ? 4'h2 :
	            (sub) ? 4'h2 :
					(ori) ? 4'h2 :
					(lui) ? 4'h2 :
					(lw | blztal) ? 4'h3 :
					(sw) ? 4'hf :
					(beq) ? 4'hf :
					(jal) ? 4'h0 :
					(jr) ? 4'hf : 4'hf;						

endmodule
