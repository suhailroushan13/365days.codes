#include <stdio.h>
int main()
{
int a,b,c;
int num,till;

printf("Enter a number : ");
scanf("%d",&num);
for(num;num<100;num++) 
{
    printf("%d X %d = %d",num,num,num);
}

return 0;
}