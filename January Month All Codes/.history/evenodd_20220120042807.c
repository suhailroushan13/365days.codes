#include <stdio.h>
int main()
{
int input,even,odd,total;

printf("Enter the number :");
scanf("%d",&input);

total = input%2 ?  even : odd;

return 0;
}