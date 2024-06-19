library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
entity mux32to1 is
    Port ( s : in  STD_LOGIC_VECTOR (4 downto 0) ;
           i0 : in  STD_LOGIC_VECTOR (31 downto 0);
           i1 : in  STD_LOGIC_VECTOR(31 downto 0);
           i2 : in  STD_LOGIC_VECTOR(31 downto 0);
           i3 : in  STD_LOGIC_VECTOR(31 downto 0);
           i4 : in  STD_LOGIC_VECTOR(31 downto 0);
           i5 : in  STD_LOGIC_VECTOR(31 downto 0);
           i6 : in  STD_LOGIC_VECTOR(31 downto 0);
           i7 : in  STD_LOGIC_VECTOR(31 downto 0);
			  i8 : in  STD_LOGIC_VECTOR(31 downto 0);
           i9 : in  STD_LOGIC_VECTOR(31 downto 0);
           i10 : in  STD_LOGIC_VECTOR(31 downto 0);
           i11 : in  STD_LOGIC_VECTOR(31 downto 0);
           i12 : in  STD_LOGIC_VECTOR(31 downto 0);
           i13 : in  STD_LOGIC_VECTOR(31 downto 0);
           i14 : in  STD_LOGIC_VECTOR(31 downto 0);
           i15 : in  STD_LOGIC_VECTOR(31 downto 0);
			  i16 : in  STD_LOGIC_VECTOR (31 downto 0);
           i17 : in  STD_LOGIC_VECTOR (31 downto 0);
           i18 : in  STD_LOGIC_VECTOR (31 downto 0);
           i19 : in  STD_LOGIC_VECTOR (31 downto 0);
           i20 : in  STD_LOGIC_VECTOR (31 downto 0);
           i21 : in  STD_LOGIC_VECTOR (31 downto 0);
           i22 : in  STD_LOGIC_VECTOR (31 downto 0);
           i23 : in  STD_LOGIC_VECTOR (31 downto 0);
			  i24 : in  STD_LOGIC_VECTOR (31 downto 0);
           i25 : in  STD_LOGIC_VECTOR (31 downto 0);
           i26 : in  STD_LOGIC_VECTOR (31 downto 0);
           i27 : in  STD_LOGIC_VECTOR (31 downto 0);
           i28 : in  STD_LOGIC_VECTOR (31 downto 0);
			  i29 : in  STD_LOGIC_VECTOR (31 downto 0);
			  i30 : in  STD_LOGIC_VECTOR (31 downto 0);
           i31 : in  STD_LOGIC_VECTOR (31 downto 0);
          
           Y : out  STD_LOGIC_VECTOR (31 downto 0));
end mux32to1;

architecture Behavioral of mux32to1 is
SIGNAL a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31:STd_LOGIC;

begin
Y<=
i0 WHEN (s<="00000") ELSE
i1 WHEN (s<="00001") ELSE
I2 WHEN (s<="00010") ELSE
I3 when (s<="00011") ELSE
I4 WHEN (s<="00100") ELSE
I5 WHEN (s<="00101") ELSE
I6 WHEN (s<="00110") ELSE
I7 WHEN (s<="00111") ELSE
I8 WHEN (s<="01000") ELSE
i9 WHEN (s<="01001") ELSE
i10 WHEN (s<="01010") ELSE
i11 WHEN (s<="01011") ELSE
I12 WHEN (s<="01100") ELSE
I13 when (s<="01101") ELSE
I14 WHEN (s<="01110") ELSE
I15 WHEN (s<="01111") ELSE
I16 WHEN (s<="10000") ELSE
I17 WHEN (s<="10001") ELSE
I18 WHEN (s<="10010") ELSE
i19 WHEN (s<="10011") ELSE
i20 WHEN (s<="10100") ELSE
i21 WHEN (s<="10101") ELSE
I22 WHEN (s<="10110") ELSE
I23 when (s<="10111") ELSE
I24 WHEN (s<="11000") ELSE
I25 WHEN (s<="11001") ELSE
I26 WHEN (s<="11010") ELSE
I27 WHEN (s<="11011") ELSE
I28 WHEN (s<="11100") ELSE
i29 WHEN (s<="11101") ELSE
i30 WHEN (s<="11110") ELSE
i31 WHEN (s<="11111") ELSE
"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
end Behavioral;