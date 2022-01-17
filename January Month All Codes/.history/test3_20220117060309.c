#include <stdio.h>
int main()
{
int a=5,b=3,c;
int sum;
sum = (a < b) || (b++) || (a++);
printf("%d\n", sum);
printf("%d\n", b);
printf("%d\n", a);

return 0;
}