#include <stdio.h>
int main()
{
int age;

printf("Enter the age of your :");
scanf("%d",&age);

if (age >= 18) 
{
    printf("You Can Vote");
}
else
{
    printf("You Cannot Vote")
}


return 0;
}