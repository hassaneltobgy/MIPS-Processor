library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

entity ALUcontrol is
    Port ( ALUop : in  STD_LOGIC_VECTOR (1 downto 0);
           OPcode : out  STD_LOGIC_VECTOR (3 downto 0);
           funct : in  STD_LOGIC_VECTOR (5 downto 0));
end ALUcontrol;

architecture Behavioral of ALUcontrol is

signal outtp: STD_LOGIC_VECTOR (3 downto 0);

begin
        --process(ALUOP, FUNCT)
            --begin
		outtp <= 
				"0010" when (funct = "100000" and aluop = "10") ELSE --ADD
				"0110" when (funct = "100010" and aluop = "10") ELSE --SUB
				"0000" when (funct = "100100" and aluop = "10") ELse --AND
				"0001" when (funct = "100101" and aluop = "10") ELSE --OR
				"0111" when (funct = "101010" and aluop = "10") ELSE --SLT
				"0010" when ( aluop = "00") ELSE --LOAD and STORE
				"0110" when ( aluop = "01") ELSE --BEQ
				"1110" when ( aluop = "11") ELSE --BNE
				"1100" when (funct = "100111" and aluop = "10")	ElSE --NOR				
				(others => 'Z');
		OPcode <= outtp; 		
                

                    --when others => null;
               -- end case;
        --end process;

end Behavioral;

