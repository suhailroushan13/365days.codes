#include <stdio.h>
int main()
{
int age,salary;
printf("Enter the age and salary :");
scanf("%d %d",&age,&salary);

if(age > 50 && salary < 10000)
{
   salary += 1000;
   printf("Salary is %d\n",salary);
}
else
{
  salary += 100;
  printf("Salary is %d\n", salary);
}




return 0;
}