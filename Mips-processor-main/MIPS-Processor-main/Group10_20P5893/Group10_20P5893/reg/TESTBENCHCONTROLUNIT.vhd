--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:20:05 05/16/2022
-- Design Name:   
-- Module Name:   D:/LAB 2REG/reg/TESTBENCHCONTROLUNIT.vhd
-- Project Name:  reg
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: controlunit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TESTBENCHCONTROLUNIT IS
END TESTBENCHCONTROLUNIT;
 
ARCHITECTURE behavior OF TESTBENCHCONTROLUNIT IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT controlunit
    PORT(
         OPCODEE : IN  std_logic_vector(5 downto 0);
         REGDSTT : OUT  std_logic;
         ALUSRCC : OUT  std_logic;
         MEMTOREGG : OUT  std_logic;
         REGWRITEE : OUT  std_logic;
         MEMREADD : OUT  std_logic;
         MEMWRITEE : OUT  std_logic;
         BRANCHH : OUT  std_logic;
         JUMPP : OUT  std_logic;
         BNEQQ : OUT  std_logic;
         ALUOPP : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal OPCODEE : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal REGDSTT : std_logic;
   signal ALUSRCC : std_logic;
   signal MEMTOREGG : std_logic;
   signal REGWRITEE : std_logic;
   signal MEMREADD : std_logic;
   signal MEMWRITEE : std_logic;
   signal BRANCHH : std_logic;
   signal JUMPP : std_logic;
   signal BNEQQ : std_logic;
   signal ALUOPP : std_logic_vector(1 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: controlunit PORT MAP (
          OPCODEE => OPCODEE,
          REGDSTT => REGDSTT,
          ALUSRCC => ALUSRCC,
          MEMTOREGG => MEMTOREGG,
          REGWRITEE => REGWRITEE,
          MEMREADD => MEMREADD,
          MEMWRITEE => MEMWRITEE,
          BRANCHH => BRANCHH,
          JUMPP => JUMPP,
          BNEQQ => BNEQQ,
          ALUOPP => ALUOPP
        );

   -- Clock process definitions
   --<clock>_process :process
   --begin
		--<clock> <= '0';
		--wait for <clock>_period/2;
		--<clock> <= '1';
		--wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		OPCODEE <= "000000";
	
      wait for 100 ns;	
OPCODEE <= "000100";
  wait for 100 ns;
OPCODEE <= "000101";
    wait for 100 ns;	
	 OPCODEE <= "000010";
    wait for 100 ns;	
	  OPCODEE <="100011";
	  wait for 100 ns;	


      -- insert stimulus here 

      wait;
   end process;

END;
