#include <stdio.h>
int main() {
  int a = 10, b=15, c;

    int f = 10,g=2;
  /******

Left Shift Operator Means Remove From Left Side and Add to Right Side
  Left Shift Operator (<<)
 
  Decreasing the value by 2 bits Adding Zero

  if a = 10 and a << 2

  then a = 10 and binary is 1010

  a = 10 = 00001010 << 2

  0 0 0 0 1 0 1 0  Applying Left Shift

  Removing Left 2 Zeros Bits And Adding Zero In Last Bit

  0 0 1 0 1 0 0 0 Which is now in decimal is 40


  Example 2 :
  b = 15;
  15 << 4

  Binary of 15 = 1 1 1 1
  In 8 Bit Binary is 0 0 0 0 1 1 1 1
   4 Means Removing 4 Bits From Left side

   1 1 1 1 - Removed 4 Bits From Left

   Now Added 0 In Right Last 4 Places Bits

   1 1 1 1 0 0 0 0  = which is now in decimal is


   (11110000)2 = (240)10

Step by step solution
Step 1: Write down the binary number:

11110000

Step 2: Multiply each digit of the binary number by the corresponding power of
two:

1x27 + 1x26 + 1x25 + 1x24 + 0x23 + 0x22 + 0x21 + 0x20

Step 3: Solve the powers:

1x128 + 1x64 + 1x32 + 1x16 + 0x8 + 0x4 + 0x2 + 0x1 = 128 + 64 + 32 + 16 + 0 + 0
+ 0 + 0

Step 4: Add up the numbers written above:

128 + 64 + 32 + 16 + 0 + 0 + 0 + 0 = 240.

So, 240 is the decimal equivalent of the binary number 11110000.



****************************************
Shortcut Trick to find it

a<<b 
a * (2^b)



1. 12 << 1
2. 12 * (2^1) = 12 * 2 = 24

1. 12 << 2
2. 12 * (2^2) = 12 * 4 = 48

1. 12 << 3
2. 12 * (2^3) = 12 * 8 = 96

**********************************

  *******/

  printf("%d\n", a << 2);
  printf("%d\n",b << 4);
  // 10 << 2
  // 10 * (2 ^ 2) = 10 * 4 = 40

  printf("%d\n",f << g);

  // 10 >> 2
  // 10 / (2 ^ 2) = 10 / 4 = 5/2 = 2
  printf("%d\n",f >> g);


  return 0;
}