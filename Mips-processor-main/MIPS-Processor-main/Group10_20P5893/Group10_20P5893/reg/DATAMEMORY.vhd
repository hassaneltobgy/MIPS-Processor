library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.STD_LOGIC_UNSIGNED.all;

entity DATAMEMORY is
  Generic(words : natural :=64;wordsize: natural :=32; addresssize: natural := 32);
  port ( LoadIt: in STD_LOGIC;
  			INPUT     : in STD_LOGIC_VECTOR (wordsize-1 downto 0);
			OUTPUT    : out STD_LOGIC_VECTOR (wordsize-1 downto 0);
         MEM_READ : in STD_LOGIC;
			MEM_WRITE : in STD_LOGIC;
			ADDRESS   : in STD_LOGIC_VECTOR (addresssize-1 downto 0);
			CLK       : in STD_LOGIC
			);

end DATAMEMORY;

architecture BEHAVIORAL of DATAMEMORY is

  type   MEM is array (0 to words-1) of STD_LOGIC_VECTOR (wordsize-1 downto 0);
  signal MEMORY : MEM;
  signal OUTS: STD_LOGIC_VECTOR(wordsize-1 downto 0);
	signal ADDRover4: STD_LOGIC_VECTOR(addresssize-2 - 1 downto 0);
	signal ADDR_int: integer;
begin

  process ( MEM_READ, MEM_WRITE, CLK, ADDRESS, INPUT ) is
  begin
  if LoadIt = '1' then
-----------------------
--Project1 test
-----------------------
		memory(0) <= x"00000000";
		memory(1) <= x"00000000";


		memory(2) <= x"00000000";


		memory(3) <= x"00000000";


		memory(4) <= x"00000000";
 

		memory(5) <= x"00000000";
 

		memory(6) <= x"00000000";


		memory(7) <= x"00000000";
 

		memory(8) <= x"00000000";


		memory(9) <= x"00000000";


		memory(10) <= x"00000000";


		memory(11) <= x"00000000";


		memory(12) <= "00000000000000000000000000001100" ;
		memory(13) <= "00000000000000000000000000000001" ;
		memory(14) <= "00000000000000000000000000000100" ;

  else
    if FALLING_EDGE(CLK) then
      if MEM_WRITE = '1' then
			MEMORY(ADDR_int) <= INPUT;
      end if;		
    end if;
	end if;
	
end process;

	ADDRover4 <= ADDRESS(31 downto 2) ;
	ADDR_int <= CONV_INTEGER(ADDRover4);
	OUTS <= MEMORY(ADDR_int) when MEM_READ = '1' and (ADDR_int < words) else
				(others => 'Z') when MEM_READ = '0' ;
	
	OUTPUT <= OUTS;

end BEHAVIORAL;

