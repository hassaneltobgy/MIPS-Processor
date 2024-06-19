library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
entity regi is
generic (n:natural:=32);
    Port ( clk : in  STD_LOGIC;
           load : in  STD_LOGIC;
           
           I : in  STD_LOGIC_VECTOR ((N-1) downto 0);
			  
           Outp : out  STD_LOGIC_VECTOR ((N-1)downto 0);
           clr : in  STD_LOGIC);
end regi;

architecture Behavioral of regi is
--SIGNAL temp : STD_LOGIC_VECTOR ((N-1)downto 0);
begin
Process(clk,clr)
begin
if(clr='1') then
			Outp <= (others => '0');
		elsif( clk'event and clk='0' and load = '1' ) then
			Outp <= I;
			
		end if;
END PROCESS;
--Outp<=STD_LOGIC_VECTOR(signed(temp));

end Behavioral;
