/*****
FOR LOOP

for loop is used to perform multiple operations at a time with a termination point

for loop structure :

    Initialization;Condition;Update/Modify/Increment/Decrement;
for(expression1;expression2;expression3;)
{
    statements;
    algorithms;
    body;
}
******/
#include <stdio.h>
int main()
{

// Declaring variable int i = 1; because i want to start from 1
// condition at where i want to stop is i<=10
// i++ = (i = i+1) 

for(int i = 1; i <=10; i++)
{
    printf("i = %d\n", i);
}

return 0;
} 