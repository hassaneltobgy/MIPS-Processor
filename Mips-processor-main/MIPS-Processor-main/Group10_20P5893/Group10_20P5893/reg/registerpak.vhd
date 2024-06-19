library IEEE;
use IEEE.STD_LOGIC_1164.all;
use ieee.numeric_std.all;
package registerpak is


component regi is
generic (n:natural:=32);
    Port ( clk : in  STD_LOGIC;
           load : in  STD_LOGIC;
           
           I : in  STD_LOGIC_VECTOR ((N-1) downto 0);
           Outp : out  STD_LOGIC_VECTOR ((N-1)downto 0);
           clr : in  STD_LOGIC);
end component;
end registerpak;

package body registerpak is

end registerpak;
