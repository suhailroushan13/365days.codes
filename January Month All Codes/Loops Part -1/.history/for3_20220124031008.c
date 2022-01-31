#include <stdio.h>
int main()
{
int a,b,c;
int count;
int sum;
int input;

for (int i = 1;i<10;i++)
{
 count += i;

  printf("%d\n", i);

  count++;
}

printf("%d\n",count);
return 0;
}