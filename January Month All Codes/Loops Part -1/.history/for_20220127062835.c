#include <stdio.h>
int main()
{
int a,b,c;
int fia,count;
for (int i=1;i<=10;i++)
{
    fia = i*5;
    count += fia;
    printf("5 X %d = %d\n",i,fia);
}
printf("%d\n",count);

return 0;
}