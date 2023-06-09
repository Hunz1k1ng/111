`include "defines.v"

// PC寄存器模块
module pc_reg(

    input wire clk,
    input wire rst,


    output reg[`InstAddrBus] pc_o           // PC指针

    );


    always@(posedge clk) 
	 begin
        if (rst == `RstEnable)
            pc_o <= `CpuResetAddr;        // 复位
	   	else
            pc_o <= pc_o + 4'h4;         // 地址加4
     end

endmodule
