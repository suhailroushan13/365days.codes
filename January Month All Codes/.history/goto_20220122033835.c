#include <stdio.h>
int main()
{
int age,b,c;

g: Hello;
printf("Going to g :");

s: Hi;
printf("Going to s :");

printf("Enter the age :");
scanf("%d",&age);

if(age >= 18)

goto g;

else

goto s:


return 0;
}