library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use work.registerpak.all;
use work.muxpaknew.all;
use work.decoderpak.all;
entity RegisterFile is
GENERIC (n: NATURAL := 32) ;
    Port ( clr : in STD_LOGIC ;
	 read_sel1 : in  STD_LOGIC_VECTOR (4 downto 0);
           read_sel2 : in  STD_LOGIC_VECTOR (4 downto 0);
           write_sel : in  STD_LOGIC_VECTOR (4 downto 0);
           write_ena : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           write_data : in  STD_LOGIC_VECTOR ((N-1) downto 0);
           data1 : out  STD_LOGIC_VECTOR ((N-1) downto 0);
           data2 : out  STD_LOGIC_VECTOR ((N-1) downto 0));
end RegisterFile;

architecture Behavioral of RegisterFile is

SIGNAL Tmp0, tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31: STD_LOGIC_VECTOR (n-1 DOWNTO 0);
SIGNAL d : STD_LOGIC_VECTOR ((n-1) DOWNTO 0);

begin
dec : Decoder Port Map (write_sel,write_ena,d);
mux1 : mux32to1 Port Map (read_sel1 , tmp0 , tmp1 , tmp2 , tmp3 , tmp4 , tmp5 , tmp6 , tmp7 , tmp8 , tmp9 , tmp10 , tmp11 , tmp12 , tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,data1);
mux2 : mux32to1 Port Map (read_sel2 ,tmp0,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,tmp30,tmp31,data2);

R0 : regi GENERIC MAP (N) PORT MAP (clk,d(0), write_data, Tmp0, '1');
R1 : regi GENERIC MAP (N) PORT MAP (clk,d(1), write_data, Tmp1, clr);
R2 : regi GENERIC MAP (N) PORT MAP (clk,d(2), write_data, Tmp2, clr);
R3 : regi GENERIC MAP (N) PORT MAP (clk,d(3), write_data, Tmp3, clr);
R4 : regi GENERIC MAP (N) PORT MAP (clk,d(4), write_data, Tmp4, clr);
R5 : regi GENERIC MAP (N) PORT MAP (clk,d(5), write_data, Tmp5, clr);
R6 : regi GENERIC MAP (N) PORT MAP (clk,d(6), write_data, Tmp6, clr);
R7 : regi GENERIC MAP (N) PORT MAP (clk,d(7), write_data, Tmp7, clr);
R8 : regi GENERIC MAP (N) PORT MAP (clk,d(8), write_data, Tmp8, clr);
R9 : regi GENERIC MAP (N) PORT MAP (clk,d(9), write_data, Tmp9, clr);
R10 : regi GENERIC MAP (N) PORT MAP (clk,d(10), write_data, Tmp10, clr);
R11 : regi GENERIC MAP (N) PORT MAP (clk,d(11), write_data, Tmp11, clr);
R12 : regi GENERIC MAP (N) PORT MAP (clk,d(12), write_data, Tmp12, clr);
R13 : regi GENERIC MAP (N) PORT MAP (clk,d(13), write_data, Tmp13, clr);
R14 : regi GENERIC MAP (N) PORT MAP (clk,d(14), write_data, Tmp14, clr);
R15 : regi GENERIC MAP (N) PORT MAP (clk,d(15), write_data, Tmp15, clr);
R16 : regi GENERIC MAP (N) PORT MAP (clk,d(16), write_data, Tmp16, clr);
R17 : regi GENERIC MAP (N) PORT MAP (clk,d(17), write_data, Tmp17, clr);
R18 : regi GENERIC MAP (N) PORT MAP (clk,d(18), write_data, Tmp18, clr);
R19 : regi GENERIC MAP (N) PORT MAP (clk,d(19), write_data, Tmp19, clr);
R20 : regi GENERIC MAP (N) PORT MAP (clk,d(20), write_data, Tmp20, clr);
R21 : regi GENERIC MAP (N) PORT MAP (clk,d(21), write_data, Tmp21, clr);
R22 : regi GENERIC MAP (N) PORT MAP (clk,d(22), write_data, Tmp22, clr);
R23: regi GENERIC MAP (N) PORT MAP (clk,d(23), write_data, Tmp23, clr);
R24 : regi GENERIC MAP (N) PORT MAP (clk,d(24), write_data, Tmp24, clr);
R25 : regi GENERIC MAP (N) PORT MAP (clk,d(25), write_data, Tmp25, clr);
R26 : regi GENERIC MAP (N) PORT MAP (clk,d(26), write_data, Tmp26, clr);
R27: regi GENERIC MAP (N) PORT MAP (clk,d(27), write_data, Tmp27, clr);
R28: regi GENERIC MAP (N) PORT MAP (clk,d(28), write_data, Tmp28, clr);
R29 : regi GENERIC MAP (N) PORT MAP (clk,d(29), write_data, Tmp29, clr);
R30 : regi GENERIC MAP (N) PORT MAP (clk,d(30), write_data, Tmp30, clr);
R31 : regi GENERIC MAP (N) PORT MAP (clk,d(31), write_data, Tmp31, clr);

end Behavioral;