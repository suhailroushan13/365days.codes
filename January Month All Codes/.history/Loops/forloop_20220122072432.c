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
int a,b,c;
int count =0;
for (int i = 0; i < 100; i++) {
  count++;
  printf("Hello Suhail\n");
  printf("count is %d\n",count);
  printf("The Number is %d\n",i);

}

return 0;
}