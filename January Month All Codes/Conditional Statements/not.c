#include <stdio.h>
int main()
{
int a=5,b=35,c;
a = ~5;
b = ~35;

/******

5 in Binary 

Case 1:
  5  --  0000 0101
 ~5 --   1111 1010  = this is also knowns as 1's complement 

 If MSB Is 1 Then its is Negative Number so Add Negative Sign
 So Now we have -1111 1010 From Above Case
 --------------------

 Case 2:
2's complement =  + 1's complement + 2's complement

  -1111 1010 Now doing 1's complement = Inverting Bits and Doing +1
   0000 0101  Now After Inverting Bits Add 1
           1   1+1 = 1 and 0......... So Up 1 Carry And Down 0
------------------ 
- 0000 0110   (Now We Have - Sign and Binary of 0110)

= -6
 



 -------------------- 




*******************************/


printf("%d\n", a);
printf("%d\n", b);


return 0;
}