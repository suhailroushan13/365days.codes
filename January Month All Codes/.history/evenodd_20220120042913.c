#include <stdio.h>
int main()
{
int input,even,odd,total;

printf("Enter the number :");
scanf("%d",&input);

total = input%2==0 ? printf("Even\n"):printf("odd");

printf("%d",total);
return 0;
}