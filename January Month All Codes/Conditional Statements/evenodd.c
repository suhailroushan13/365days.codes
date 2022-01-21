#include <stdio.h>
int main()
{
int input,even,odd,total;

printf("Enter the number :");
scanf("%d",&input);
// Terenaru Operator
// total = input%2==0 ? printf("Even\n"):printf("odd\n");

if (input%2==0)
 printf("Its Even\n");
 else 
 printf("Its Odd\n");


return 0;
}