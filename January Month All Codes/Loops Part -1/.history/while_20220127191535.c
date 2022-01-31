#include <stdio.h>
int main()
{
int a,b,c;
int i = 1;
int count = 0;
while(i <=10)
{
    printf("2 X %d = %d\n",i,i*2);
     i++;
     count += i;
}
printf("%d\n",count);


return 0;
}