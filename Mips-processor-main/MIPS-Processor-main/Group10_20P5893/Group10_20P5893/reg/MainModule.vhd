library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use work.ALUcontrolpak.all;
use work.DTAMEMORYpak.all;

use work.SignExtenderpak.all;
use work.controlunitpak.all;
use work.muxnbits2to1pak.all;
use work.programcounterpak.all;
use work.muxpaknew.all;
use work.muxnbits2to1pak.all;
use work.ALUpak.all;
use work.RegisterFilepak.all;
use work.ADDERpak.all;
use work.Instructionpak.all;
entity MainModule is
Port( START: IN STD_LOGIC;
		CLK: IN STD_LOGIC;
		RegFileOut1: OUT STD_LOGIC_VECTOR(31 downto 0);
		RegFileOut2: OUT STD_LOGIC_VECTOR(31 downto 0);
		ALUOut: OUT STD_LOGIC_VECTOR(31 downto 0);
		PCOut: OUT STD_LOGIC_VECTOR(31 downto 0);
		DataMemOut: OUT STD_LOGIC_VECTOR(31 downto 0));
end MainModule;

architecture Behavioral of MainModule is
SIGNAL readdata1,adder2outt,PCadderoutt,readdata2,ALUoutt,PCOutt,DataMemOutt,instructionmemoryOutt,WRDATA,ALUinput,SIGNEXTENDOUT, signaloutfrommux, pcin, shiftleft , concat : STD_LOGIC_VECTOR(31 downto 0);
SIGNAL shiftinput26 : STD_LOGIC_VECTOR(25 downto 0);
SIGNAL WRADDRESS : STD_LOGIC_VECTOR(4 downto 0);
SIGNAL RegDst,Regwrite,ALUsource,Memwrite,Memtoreg,cf,zf,ovf,Memread,Beq,Bneq,jump : STD_LOGIC;
SIGNAL ALUop:STD_LOGIC_VECTOR(1 downto 0);
SIGNAL ALUOPCODE:STD_LOGIC_VECTOR(3 downto 0);
--Signal CONTROLOUT:STD_LOGIC_VECTOR(10 downto 0);
SIGNAL startdash, bneqlogic: STD_LOGIC;
--signal offset : std_logic := '4'
begin
--proc:
--process(clk,START,RegFileOut1,RegFileOut2) isstartdash<= not (START);
shiftleft <= (SIGNEXTENDOUT(29 downto 0)&"00");
bneqlogic <=(bneq and (not zf)) OR (beq and zf);
concat <= PCadderoutt(31 downto 28)&(instructionmemoryOutt(25 downto 0) &"00");
startdash <= not(START);

pc: programcounter PORT MAP ( CLK, pcin,PCOutt,START);
instructionmemory123 : INSTRMEMORY generic map(64,32,32) port map(startdash,instructionmemoryOutt,PCOutt,CLK);

maincontrolL: controlunit port map(instructionmemoryOutt(31 downto 26), RegDst, ALUsource, Memtoreg, Regwrite, Memread, Memwrite, beq, jump, bneq, ALUop); 


mux4bits2to1 : muxnbits2to1 GENERIC MAP(5) PORT MAP(instructionmemoryOutt(20 downto 16),instructionmemoryOutt(15 downto 11),RegDst, WRADDRESS);
REGs : RegisterFile GENERIC MAP(32) PORT MAP(START,instructionmemoryOutt(25 downto 21),instructionmemoryOutt(20 downto 16), WRADDRESS, Regwrite, CLK, WRDATA, readdata1, readdata2); 
signextend : SignExtender Port MAp((instructionmemoryOutt(15 downto 0)), SIGNEXTENDOUT);
mux32bits2to1 : muxnbits2to1 GENERIC MAP(32) PORT MAP(readdata2, SIGNEXTENDOUT, ALUsource, ALUinput); 
ALUcont : ALUcontrol Port MAp(ALUop,ALUOPCODE,(instructionmemoryOutt(5 downto 0)));
ArithmeticALU : ALU Port MAP(readdata1,ALUinput,ALUOPCODE,'0',ALUoutt,cf,zf,ovf);
DATAMEM: DATAMEMORY generic map( 64,32,32) port map(startdash,readdata2,DataMemOutt,Memread,Memwrite,ALUoutt,clk);
mux32bits2to1_1 : muxnbits2to1 GENERIC MAP(32) PORT MAP(ALUoutt, DatamemOutt, MemtoReg, WRDATA);

add1:ADDER GENERIC MAP(32) PORT MAP(PCOutt,x"00000004",PCadderoutt);
add2:ADDER GENERIC MAP(32) PORT MAP(shiftleft,PCadderoutt,adder2outt);
muxafterradder: muxnbits2to1 Generic MAp(32) PORT MAP(PCadderoutt,adder2outt,bneqlogic,signaloutfrommux);-------------
muxaftermux: muxnbits2to1 GENERIC MAP (32) PORT MAP (signaloutfrommux,concat,jump,pcin);
--replace 0 can be not(START)
--NASYEEN HAGA HENAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
--NASYEEEN HAGA(cf, zf,ovf msh 3arfeen n5aly el cf wl ovf b eh)


RegFileOut1<= readdata1;
RegFileOut2<= readdata2;
ALUout<= ALUoutt;
PCout<= PCoutt;
DataMemOut<= DataMemOutt;
--dataout <= result;

--end process;


--process(CLK, START)
-- if(START='1') then
 -- PCOutt <= x"00000000";
-- elsif(falling_edge(CLK)) then
 -- PCOutt <= pcin;
 --end if;
--end process;



end Behavioral;