#include <stdio.h>
int main()
{
int age;

printf("Enter the age of your :");
scanf("%d",&age);
// If there is one statement then you dont need paranthensis {} in if or else condition
// if age is greater than or equal to 18 it will go if condition
// else it will go to else condition
// No para


if (age >= 18) 

    printf("You Can Vote\n");

else

    printf("You Cannot Vote\n");



return 0;
}