#include <stdio.h>
int main()
{
int a,b,c;
a = 2;
b = 4;
// Pre fix
printf("%d\n",++a);

// Post fix
printf("%d\n",b++);


printf("%d\n",b);



// the ++a means pre increment
// which increase the number with 1 like adding +1 to the a
// this is pre increment ++a means increment

// now b value u assigned as 4 
// now u print b with b++ it will be the same as 4
// again u print next time b then will added with 1 and the output will be 5


// 3
// 4
// 5
 


return 0;
}