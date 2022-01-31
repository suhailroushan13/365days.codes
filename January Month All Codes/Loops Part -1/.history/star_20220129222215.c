#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the number of stars: ");
scanf("%d",&a);

for(int i = 1;i<= a; i++)
printf("*\n");

return 0;
}