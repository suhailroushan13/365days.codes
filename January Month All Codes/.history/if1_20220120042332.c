#include <stdio.h>
int main()
{
int age;

printf("Enter the age of your :");
scanf("%d",&age);
// If there is one condition then you dont need paranthensis 


if (age >= 18) 

    printf("You Can Vote\n");

else

    printf("You Cannot Vote\n");



return 0;
}