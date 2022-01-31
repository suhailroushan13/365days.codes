#include <stdio.h>
int main()
{
int a,b,c;
int count;
for (int i = 0;i<=9;i++)
{
 count += i;

  printf("%d\n", i);

  count++;
}
printf("%d\n",count);
return 0;
}