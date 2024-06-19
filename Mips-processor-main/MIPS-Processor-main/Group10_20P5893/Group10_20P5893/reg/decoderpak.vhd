
library IEEE;
use IEEE.STD_LOGIC_1164.all;

use ieee.numeric_std.all;
package decoderpak is
component Decoder is
    Port ( I : in  STD_LOGIC_VECTOR (4 downto 0);
			  E : in STD_LOGIC;
           O : out  STD_LOGIC_VECTOR (31 downto 0));
end component;
end decoderpak;

package body decoderpak is

 
end decoderpak;
