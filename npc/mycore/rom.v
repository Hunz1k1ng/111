
//存放指令的ROM
module rom(
  input   wire   [31:0]   inst_addr_i,
  output   reg  [31:0]   inst_o
);
  reg [31:0] rom_mem [0 : 4095];      //4096个32bit空间
  //这里一次性实现命令的32位了，和原本想法略有不符
  //所以下面要一次进行加一的操作，所以才右移4位。
  always@(*)begin
    inst_o = rom_mem[inst_addr_i >> 2];  //右移两位，缩小四倍，实现每次加一操作
  end
endmodule
