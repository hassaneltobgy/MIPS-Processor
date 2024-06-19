----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:00:02 05/09/2022 
-- Design Name: 
-- Module Name:    SIgnExtender - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SIgnExtender is
    Port ( se_in : in  STD_LOGIC_VECTOR (15 downto 0);
           se_out : out  STD_LOGIC_VECTOR (31 downto 0));
end SIgnExtender;

architecture Behavioral of SIgnExtender is

begin
se_out <= x"0000" & se_in when se_in(15)='0' else
			 x"FFFF" & se_in;

end Behavioral;

