library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_signed.All;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( data1 : in  STD_LOGIC_VECTOR (31 downto 0);
           data2 : in  STD_LOGIC_VECTOR (31 downto 0);
           aluop : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           dataout : out  STD_LOGIC_VECTOR (31 downto 0);
           cflag : out  STD_LOGIC;
           zflag : out  STD_LOGIC;
           oflag : out  STD_LOGIC);
end ALU;

architecture Behavioral of ALU is
signal tmp1,tmp2 :STD_LOGIC_VECTOR (32 downto 0); --hold the addition
signal result : STD_LOGIC_VECTOR (31 downto 0);
begin
tmp1 <= (data1(31) & data1) + (data2(31) & data2) ;
tmp2 <= (data1(31) & data1) - (data2(31) & data2) ;

result <= (data1 and data2) when aluop = "0000" else
          (data1 or data2) when aluop = "0001" else
			 tmp1(31 downto 0) when aluop = "0010" else --ADD
		tmp2(31 downto 0) when aluop = "0110" else --BEQ
		tmp2(31 downto 0) when aluop = "1110" else --BNEQ
		x"00000001" when ((tmp2(31)='1') and aluop = "0111") else --slt
		x"00000000" when ((tmp2(31)='0') and aluop = "0111") else --slt
          (data1 nor data2) when aluop = "1100" else
			 (others=>'Z');
			 
zflag	<= '1' when result = x"00000000" else '0' 	;	 
	cflag	<= tmp1(32) when  aluop = "0010" else 		 
			 tmp2(32) when  aluop = "0110" else
			 'Z';
			 
			oflag	<= ( tmp1(32) xor tmp1(31)) when  aluop = "0010" else 		 
			         (tmp2(32) xor tmp2(31)) when  aluop = "0110" else
			 'Z';
			 
			 --result<=x"00000001" when 
dataout <= result;

end Behavioral;