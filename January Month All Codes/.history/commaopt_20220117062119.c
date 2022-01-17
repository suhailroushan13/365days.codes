#include <stdio.h>
int main()
{
int a,b;
a =5,4;
b = (6,8);

int f = (10,2);
// int c = 10,23; // it will give error
int d=99,e;
e = (d++,++d);

// in d++ the value is stored as 100 
// ++d has +1 the value from 100 to 101
//  Output is now 101








// if there is no brackets, then it will take 1st value 
// int a = 5,4;
// it will print 1st value as 5


// ig there are brackets, then will print 2nd value 
// int b = (6,5);
// it will print 2nd value as 8

// int c = 10,12 // it will error here

printf("%d\n",a);
printf("%d\n",b);
// printf("%d\n",c);
printf("%d\n", e);
printf("%d\n", f);

return 0;

}