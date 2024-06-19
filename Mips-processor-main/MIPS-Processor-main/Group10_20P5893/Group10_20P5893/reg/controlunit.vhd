-- main control unit

library ieee;
use ieee.std_logic_1164.all;


entity controlunit is
    port(
			OPCODEE : in std_logic_vector(5 downto 0);
         REGDSTT, ALUSRCC, MEMTOREGG, REGWRITEE, MEMREADD : out std_logic;
         MEMWRITEE, BRANCHH, JUMPP, BNEQQ  : out std_logic;
        ALUOPP : out std_logic_vector(1 downto 0)  
    );
end entity controlunit;


architecture behavior of controlunit is
   
        signal OPCODE : STD_LOGIC_VECTOR(5 downto 0);
        SIGNAL REGDST, ALUSRC, MEMTOREG, REGWRITE, MEMREAD , BNEQ :  std_logic;
        SIGNAL MEMWRITE, BRANCH, JUMP :  std_logic;
        signal ALUOP : std_logic_vector(1 downto 0);
		  
		  begin 
		  OPCODE <= OPCODEE;
        process(OPCODE)
		  
            begin
				
                case OPCODE is
                    when "000000" =>   -- R-type instructions
                        REGDST <= '1';
                        ALUSRC <= '0';
                        MEMTOREG <= '0';
                        REGWRITE <= '1';
                        MEMREAD <= '0';
                        MEMWRITE <= '0';
                        BRANCH <= '0';
                        JUMP <= '0';
								BNEQ <= '0';
                        ALUOP <= "10";

                    when "100011" =>   -- load word
                        REGDST <= '0';
                        ALUSRC <= '1';
                        MEMTOREG <= '1';
                        REGWRITE <= '1';
                        MEMREAD <= '1';
                        MEMWRITE <= '0';
                        BRANCH <= '0';
                        JUMP <= '0';
								BNEQ <= '0';
                      
                        ALUOP <= "00";

                    when "101011" =>   -- store word
                       -- REGDST <= '-';
							  REGDST <= '0';

                        ALUSRC <= '1';
                       -- MEMTOREG <= '-';
							  MEMTOREG <= '0';
                        REGWRITE <= '0';
                        MEMREAD <= '0';
                        MEMWRITE <= '1';
                        BRANCH <= '0';
                        JUMP <= '0';
                        ALUOP <= "00";
								BNEQ <= '0';

                    when "000100" =>   -- branch on equal
                        --REGDST <= '-';
								REGDST <= '0';
                        ALUSRC <= '0';
                        --MEMTOREG <= '-';
								MEMTOREG <= '0';

					
                        REGWRITE <= '0';
                        MEMREAD <= '0';
                        MEMWRITE <= '0';
                        BRANCH <= '1';
                        JUMP <= '0';
                        ALUOP <= "01";
								BNEQ <= '0';

                    when "000010" =>   -- jump
                       -- REGDST <= '-';
								REGDST <= '0';
                        --ALUSRC <= '-';
                        --MEMTOREG <= '-';
								ALUSRC <= '0';
                        MEMTOREG <= '0';
                        REGWRITE <= '0';
                        MEMREAD <= '0';
                        MEMWRITE <= '0';
                        BRANCH <= '0';
                        JUMP <= '1';
                       -- ALUOP <= "--";
							  ALUOP <= "00";

								BNEQ <= '0';



								when "000101" => --bneq
								REGDST <= '1';
                        ALUSRC <= '0';
                        MEMTOREG <= '1';
                        REGWRITE <= '0';
                        MEMREAD <= '0';
                        MEMWRITE <= '0';
                        BRANCH <= '0';
                        JUMP <= '0';
                        ALUOP <= "01";
								BNEQ <= '1';


                    when others => 
                        REGDST <= '-';
                        ALUSRC <= '-';
                        MEMTOREG <= '-';
                        REGWRITE <= '0';
                        MEMREAD <= '0';
                        MEMWRITE <= '0';
                        BRANCH <= '0';
                        JUMP <= '0';
                       
                   
                        ALUOP <= "--";
                end case;
        end process;
		  ALUOPP <= ALUOP;
		  BNEQQ <= BNEQ;
		  JUMPP <= JUMP;
		  BRANCHH<= BRANCH;
		  MEMWRITEE <= MEMWRITE;
		  MEMREADD <= MEMREAD;
		  REGWRITEE <=REGWRITE;
		  MEMTOREGG <= MEMTOREG;
		  ALUSRCC <= ALUSRC;
		  REGDSTT <= REGDST;
		  
end architecture behavior;