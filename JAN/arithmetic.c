#include <stdio.h>
int main()
{
int a,b,c,d,e,f,g,h;
a = 1,b = 2,c = 3,d = 4,e = 5;

printf("%d\n",a+b);
printf("%d\n",c-a);
printf("%d\n",d*c);
printf("%d\n",e%d);
printf("%d\n",f/b);

// % means divide after left numbers 
// 5 apples % 3 like 5%3 = 
//  a a a a a ......_ _ _ 
//  you can carry only 3 at a time so the left ones will be the modulo
// if there none of them left then it will be 0
//  like 9 %3 = 0
//  9 % 4 = 1
// for / this it means 20/3 
// 3)20(6
// - 18
// ------
//   2   there 2 is % 
//  6 there 6 is /



return 0;
}