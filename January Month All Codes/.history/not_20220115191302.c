#include <stdio.h>
int main()
{
int a=5,b=35,c;
a = ~5;
b = ~35;

/******

5 in Binary 
  5  --  0000 0101
 ~5 --   1111 1010  = this is also knowns as 1's complement
 --------------------
2's complement =  + 1's complement + 2's complement



 -------------------- 




*******************************/


printf("%d\n", a);
printf("%d\n", b);


return 0;
}