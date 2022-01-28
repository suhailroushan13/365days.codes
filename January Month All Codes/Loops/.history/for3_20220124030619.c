#include <stdio.h>
int main()
{
int a,b,c;
int count;
for (int i = 1;i<=10;i++)
{
    count += i;
    printf("%d\n",i);
    count++;
}
return 0;
}