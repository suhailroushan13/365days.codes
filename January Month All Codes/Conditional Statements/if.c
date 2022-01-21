#include <stdio.h>
int main()
{
int a,b,c;

printf("Enter the number :");
scanf("%d",&a);

// In If Condition 0 is False 
//  1 is True 
// If in if condition the value is 1 it will go in if condition (All Numbers even negative but except zero)
//  If in if condition the value is 0 it will go in else condition
//  Even Negative numbers are there its still in if condition not it else condition

if(a) 
{
    printf("A is there if condition\n");
}
else
{
  printf("A is there else condition\n");
}
 
 
return 0;
}