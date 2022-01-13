#include <stdio.h>
int main()
{
int a=10,b=15,c=2;
/******

Right Shift Operator Means Remove From Right Side and ( Add to Left Side )

  Right Shift Operator (>>)
  10  >> 2

  Decreasing the value by 2 bits Adding Zero (2 bits Because 2 was given after
the operator)
 
  if a = 10 and a >> 2

  then a = 10 and binary is 1010

  a = 10 = 00001010 >> 2

  0 0 0 0 1 0 1 0  Applying Right Shift

  Removing Left 2 Zeros Bits And Adding Zero In Front Bit

  0 0 0 0 0 0 1 0 Which is now in decimal is  2



  Example 2:

  15 >> 4

  15 binary in 8 bit is 0 0 0 0 1 1 1 1
   Right Shift Means Remove From Right Side

   Added 0 - Old Zero     (Removed)
   0 0 0 0  0 0 0 0        1 1 1 1

So now the binary is 0 0 0 0 0 0 0 0  which is now in decimal 0

******************************

Short cut trick to find it

1. 24 >> 1
2. 24 / (2^1) = 12/1 = 12

1. 24 >> 2
2. 24 / (2^2) = 24/4 = 6

1. 24 >> 3
2. 24 / (2^3) = 24/8 = 3

*******************************
  ****/
printf("%d\n", a >> 2);
printf("%d\n", b >> 4);

return 0;
}