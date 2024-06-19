LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testALU IS
END testALU;
 
ARCHITECTURE behavior OF testALU IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         data1 : IN  std_logic_vector(31 downto 0);
         data2 : IN  std_logic_vector(31 downto 0);
         aluop : IN  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         dataout : OUT  std_logic_vector(31 downto 0);
         cflag : OUT  std_logic;
         zflag : OUT  std_logic;
         oflag : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data1 : std_logic_vector(31 downto 0) := (others => '0');
   signal data2 : std_logic_vector(31 downto 0) := (others => '0');
   signal aluop : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal dataout : std_logic_vector(31 downto 0);
   signal cflag : std_logic;
   signal zflag : std_logic;
   signal oflag : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  -- constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          data1 => data1,
          data2 => data2,
          aluop => aluop,
          cin => cin,
          dataout => dataout,
          cflag => cflag,
          zflag => zflag,
          oflag => oflag
        );

   -- Stimulus process
   stim_proc: process
   begin		
       data1 <= x"0000000C";
		data2 <= x"0000000A";
		aluop <= "0110";
wait for 10ns;
  data1 <= x"FFFFFFF9";
		data2 <= x"FFFFFFFA";
		aluop <= "0010";
wait for 10ns;
  data1 <= x"00000001";
		data2 <= x"00000001";
		aluop <= "0110";
wait for 10ns;
  data1 <= x"7FFFFFFF";
		data2 <= x"7FFFFFFF";
		aluop <= "0010";
wait for 10ns;
  data1 <= x"0F0F0F0F";
		data2 <= x"F0F0F0F0";
		aluop <= "0000";
wait for 10ns;
data1 <= x"FFFFFFFF";
data2 <= x"FFFFFFFF";
aluop <= "0010";
wait for 10ns;
data1 <= x"7FFFFFFF";
data2 <= x"FFFFFFFF";
aluop <= "0110";
wait for 10ns;
	data1 <= "11000000000000000000000000000000" ;
			data2 <= "10100000000000000000000000000000" ;
			aluop <= "0000" ;
			wait for 10ns;
			
	
		
		--OR testcase
			data1 <= "11000000000000000000000000000000" ;
			data2 <= "10100000000000000000000000000000" ;
			aluop <= "0001" ;
			wait for 10ns;
			

		
		
		--ADD testcase1 (overflow = 1, cout = 0)
			data1 <= "01110000000000000000000000000000" ;
			data2 <= "01100000000000000000000000000000" ;
			aluop <= "0010" ;
			wait for 10ns;
			

			
		
		--ADD testcase2 (zero = 1, cout = 1)
			data1 <= "11110000000000000000000000000000" ;
			data2 <= "00010000000000000000000000000000" ;
			aluop <= "0010" ;
			wait for 10ns;
			

		

		--SUB testcase1 (cout = 1)
			data1 <= "00000000000000000000000000000111" ; --a = 7
			data2 <= "00000000000000000000000000000110" ; --b = 6
			cin <= '1' ;
			aluop <= "0110" ;
			wait for 10ns;
			


		--SUB testcase2 (cout = 0)
			data1 <= "00000000000000000000000000000110" ; --a = 6
			data2 <= "00000000000000000000000000000111" ; --b = 7
			cin <= '1' ;
			aluop <= "0110" ;
			wait for 10ns;
		
			
			
						data1 <= "01110000000000000000000000000000" ;
			data2 <= "01100000000000000000000000000000" ;
			aluop <= "1110" ;
			wait for 10ns;
						
						
			data1 <= "01110000000000000000000000000000" ;
			data2 <= "01100000000000000000000000000000" ;
			aluop <= "0110" ;
			wait for 10ns;
 
						
						
						
			data1 <= "01110000000000000000000000000000" ;
			data2 <= "01100000000000000000000000000000" ;
			aluop <= "0111" ;
			wait for 10ns;
						

      wait;
   end process;
	END;