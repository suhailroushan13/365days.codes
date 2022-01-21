#include <stdio.h>
int main()
{
int age;

printf("Enter the age of your :");
scanf("%d",&age);
// If there is one statement then you dont need paranthensis {} in if or else condition
// if age is greater than or equal to 18 it will go if condition
// else it will go to else condition
// No paranthensis need if there is only one statement
// if(age) in this condition except 0 ...Everything comes under if statement
// if age is 0 then it will go to else condition
//  except 0 ..even its negative or greater zero if will go to if condition


if (age >= 18) 

    printf("You Can Vote\n");

else

    printf("You Cannot Vote\n");



return 0;
}