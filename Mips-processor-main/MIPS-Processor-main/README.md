# MIPS-Processor
Mips for Computer Organisation and Architecture CSE112
This Project was revised by Dr. Tamer Mostafa and rewarded a full mark.
Team Members:
George Welson
Farida Mohamed El-Husseiny
Mazen Mohamed Elsaied
Zeina Hesham Reda
Hassan Mohamed El-Tobgy
This project describes an emulation of a 32-bit Single-cycle MIPS processor using a hardware 
description language (VHDL). The MIPS processor is separated into five stages: instruction fetch, 
instruction decode, execution, data memory and write back. The control unit controls the operations 
performed in these stages. All the modules in the design are coded in VHDL, as it is very useful tool 
with its concept of concurrency to cope with the parallelism of digital hardware. The top-level 
module connects all the stages into a higher level. Once detecting the particular approaches for 
input, output, main block and different modules, the VHDL descriptions are run through a VHDL 
simulator, followed by the timing analysis for the validation, functionality and performance of the 
designated design that demonstrate the effectiveness of the design.
![image](https://user-images.githubusercontent.com/94200368/193915834-726206be-6dd4-4f44-bd15-66fd2c3bb1ac.png)
Here you can see an abstraction of the processor
