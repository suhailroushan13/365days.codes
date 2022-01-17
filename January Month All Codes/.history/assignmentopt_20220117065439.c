#include <stdio.h>
int main()
{
int a=10,b=10,c=10,d=10,e=10,f=10,i=10,j=10,k=10;

/****************

Assingment Operator

a += 1   Is Equal to  a = a+1
a -= 1   Is Equal to  a = a-1
a *= 1   Is Equal to  a = a*1
a /= 1   Is Equal to  a = a/1
a %= 1   Is Equal to  a = a%1
a <<= 1   Is Equal to  a = a<<1
a >>= 1   Is Equal to  a = a>>1
a &= 1   Is Equal to  a = a&1
a |= 1   Is Equal to  a = a|1
a ^= 1   Is Equal to  a = a^1

******************/

printf("%d\n", a += 1);
printf("%d\n", b -= 1);
printf("%d\n", c *= 1);
printf("%d\n", d /= 1);
printf("%d\n", e %= 1);
printf("%d\n", f <<= 1);
printf("%d\n", g >>= 1);
printf("%d\n", h &= 1);
printf("%d\n", j |= 1);
printf("%d\n", k ^= 1);

return 0;
}