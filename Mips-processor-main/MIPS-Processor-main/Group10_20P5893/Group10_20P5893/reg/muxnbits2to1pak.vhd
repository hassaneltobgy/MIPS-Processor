--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package muxnbits2to1pak is

component muxnbits2to1 is
Generic  (N : NATURAL := 32);
    Port ( i0 : in  STD_LOGIC_VECTOR((N-1) downto 0);
           i1 : in  STD_LOGIC_VECTOR((N-1) downto 0);
           s1 : in  STD_LOGIC;
           output : out  STD_LOGIC_VECTOR((N-1) downto 0));
end component;
end muxnbits2to1pak;

package body muxnbits2to1pak is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end muxnbits2to1pak;
