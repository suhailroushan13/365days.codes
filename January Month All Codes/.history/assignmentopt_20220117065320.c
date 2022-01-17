#include <stdio.h>
int main()
{
int a=10,b=10,c=10;

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
printf("%d\n", a -= 1);
printf("%d\n", a *= 1);
printf("%d\n", a /= 1);
printf("%d\n", a %= 1);
printf("%d\n", a <<= 1);
printf("%d\n", a >>= 1);
printf("%d\n", a &= 1);
printf("%d\n", a |= 1);
printf("%d\n", a ^= 1);

return 0;
}