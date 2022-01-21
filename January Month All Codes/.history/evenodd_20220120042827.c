#include <stdio.h>
int main()
{
int input,even,odd,total;

printf("Enter the number :");
scanf("%d",&input);

total = input%2 ? printf("Even"):printf("");

return 0;
}