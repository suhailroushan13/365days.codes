#include <stdio.h>
int main()
{
int a=10,b=11,c=12,d=13,e=14;
int result;
result = a<b && printf("Hello");


 printf("%d\n",a < b && c < d ); //All True ..so Output is True
 printf("%d\n", a < b && b < a); // One True and One False so output is false

// Below 2 lines are relational operators 10 and 11 lines
// printf("%d\n", e > d);
// printf("%d\n", e < d);


printf("%d\n",result);




/*
    Logical AND Table &&
    x   y  |  xy
-----------+-----------
    0   0  |  0
    0   1  |  0
    1   0  |  0
    1   1  |  1

    In Logical And to get 1 Both Conditions must be true 1
    If there is any false condition in logical and then it will show false 0

    Example : Good water and bad water
    
    you will never drink bad mixed with good water;
    if there is little amount of bad water then it is bad water
    for good water you must need only good water and good water 1 and 1 to get 1 

*/

return 0;
}