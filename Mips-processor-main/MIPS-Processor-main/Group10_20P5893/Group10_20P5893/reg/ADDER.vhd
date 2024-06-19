
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.all;
use IEEE.std_logic_signed.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ADDER is
			Generic  (N : NATURAL := 32);
			Port ( x : in  STD_LOGIC_VECTOR ((N-1) downto 0);
					 y : in  STD_LOGIC_VECTOR ((N-1) downto 0);
			     --  c : out STD_LOGIC;
                outt : out  STD_LOGIC_VECTOR ((N-1) downto 0));
end ADDER;

architecture Behavioral of ADDER is

SIGNAL TMP: STD_LOGIC_VECTOR (N downto 0);

begin

TMP<=(x(N-1) & x) + (y(N-1) & y);
outt <= TMP((N-1) downto 0);
--c<=TMP(N);
end Behavioral;
