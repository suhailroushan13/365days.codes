#include <stdio.h>
int main()
{
int input,even,odd,total;

printf("Enter the number :");
scanf("%d",&input);
// Terenaru Condtion
total = input%2==0 ? printf("Even\n"):printf("odd\n");


return 0;
}