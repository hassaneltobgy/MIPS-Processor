
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity muxnbits2to1 is
Generic  (N : NATURAL := 32);
    Port ( i0 : in  STD_LOGIC_VECTOR((N-1) downto 0);
           i1 : in  STD_LOGIC_VECTOR((N-1) downto 0);
           s1 : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR((N-1) downto 0));
end muxnbits2to1;

architecture Behavioral of muxnbits2to1 is

begin
output <= 
i0 when s1='0' else
i1 when s1='1' else
(others=>'Z'); 

end Behavioral;

