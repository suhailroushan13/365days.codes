#include <stdio.h>
int main()
{
int a,b,c;
int input,fac;
printf("Enter the number");
scanf("%d",&input);
for(int i=0;i<input;i++)
{
    input = i*i-1;
}

printf("%d\n",input);

return 0;
}