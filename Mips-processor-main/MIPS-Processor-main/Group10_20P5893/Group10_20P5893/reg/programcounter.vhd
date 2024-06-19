library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
--use IEEE.std_Logic_unsigned.all;
entity programcounter is
Port ( clk : in STD_LOGIC;--- clk is going at falling edge 
		 d_in : in STD_LOGIC_VECTOR (31 downto 0);
	    d_out : out STD_LOGIC_VECTOR (31 downto 0);
       rst : in STD_LOGIC);
end programcounter;
architecture behavioral of programcounter is
begin
process(CLK, RST)
            begin
				if RST = '1' then
                    d_out <= (others=>'0');
                elsif FALLING_edge(CLK) then
                    d_out <= d_in;
						  
                end if;                
        end process;
end architecture behavioral;

