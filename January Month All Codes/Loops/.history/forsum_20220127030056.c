#include <stdio.h>
int main()
{
int input,sum;
printf("Enter the Number");
scanf("%d",&input);
for (int i=0; i<input;i++)
{
    input += i;
    input++;
}
printf("%d\n",input);

return 0;
}