Aim : To study and implement C++ Bitwise Operators

Software / tools : Mingw compiler , Vscode , online compiler for C++

#Program a : Bitwise Operators in C++

This program starts with the declaration and initialization of two variables a and b with 10 (1010) and 14(1110) respectively. The program explain different types of bitwise operations and its working: AND (&) examines each bit of both numbers and returns 1 if both are equal to 1. OR (|) returns 1 if the first number has at least one of the bits equal to 1. NOT (~) flips each bit (making 1 equal to 0 and 0 equal to 1). XOR (^) returns 1 if the bits are different. Left Shift (<<) shifts given bit to the left, thus adding required bit each time the given bit shifts to left. Right Shift (>>) shifts the bits to the right, thus adding required bit each time the given bit shifts to right.

Algorithm:

Step- 1: Start
Step- 2: Initialize two integers
Step- 3: Perform Bitwise Operations
Step- 4: Perform Shift Operations
Step- 5: Display Results
Step- 6: End

#Program b : Setting and Resetting the bit

The program begins by creating an variable 'a' and assigning it a value of 128. In binary, this is represented as 10000000. The program demonstrates to the user the process of setting and resetting bits in a number. The user is prompted to enter the position of a bit to set (change to 1). The user is then prompted to enter the position of a bit to reset (change to 0). To set a bit, the program uses the expression a | (1 << bit_set) which shifts 1 to the left by bit_set positions then uses a bitwise OR to turn that bit ON. To reset a bit, it uses a & (~(1 << bit_resetting)) which shifts 1 to the left, then uses bitwise NOT to create a mask, then ANDs to turn that bit OFF. The results of setting and resetting the bits are printed, and the program demonstrates basic bit manipulation, a common way to manipulate bits in system programming, embedded systems, or in performance-critical code.

Algorithm:

Step- 1: Start
Step- 2: Initialize Variables
Step- 3: Input Operations
Step- 4: Bit Manipulation
Step- 5: Set the chosen bit:
Step- 6: Output Results
Step- 7: End
Conclusion: We created a program for setting and resetting of a bit and also about all the bitwise operators in C++.
