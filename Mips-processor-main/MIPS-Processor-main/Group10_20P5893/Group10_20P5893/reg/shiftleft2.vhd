library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity shiftleft2 is
    Port ( input26 : in  STD_LOGIC_VECTOR (25 downto 0);
           output28 : out  STD_LOGIC_VECTOR (27 downto 0));
end shiftleft2;

architecture Behavioral of shiftleft2 is

begin

output28 <= input26 & "00";
end Behavioral;

