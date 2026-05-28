`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:41 12/01/2025 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
    input clk,
    input reset,
    input WE,
    input [4:0] addr,
    input [31:0] WD,
    output [31:0] data, 
    input [31:0] VPC,
    input BD,
    input [4:0] ExcCode,
    input [5:0] HWInt,
    input EXLclr,
    output [31:0] EPCout,
    output Req
    );

    reg [31:0] SR;
    reg [31:0] Cause;
    reg [31:0] EPC;
    reg [31:0] PRId;
	 
always@(posedge clk) begin
    if (reset) begin
        SR <= 32'h00000000;
        Cause <= 32'h00000000;
        EPC <= 32'h00000000;
        PRId <= 32'h20060805;
    end
    else begin
        if (WE & ~Req) begin
            if (addr == 5'b01100) begin
                SR <= WD;
            end
            else if (addr == 5'b01110) begin
                EPC <= WD;
            end
        end
        else if (Req) begin
            SR[1] <= 1'b1;
            Cause[31] <= BD;
            Cause[6:2] <= (~SR[1] && SR[0] && (SR[15:10] & HWInt)) ? 5'b00000 : ExcCode;
            EPC <= BD ? (VPC - 32'h00000004) : VPC;
        end
        if (EXLclr) begin
            SR[1] <= 1'b0;
        end
        Cause[15:10] <= HWInt;
    end
end

assign data = (addr == 5'b01100) ? SR : 
              (addr == 5'b01101) ? Cause : 
              (addr == 5'b01110) ? EPC : 
              (addr == 5'b01111) ? PRId : 32'h00000000;

assign EPCout = EPC;

assign Req = (~SR[1] && ((SR[0] && (SR[15:10] & HWInt)) || (ExcCode)));

endmodule

