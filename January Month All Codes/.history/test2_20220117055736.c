#include <stdio.h>
int main()
{
int a=5,b=3,c;
int sum;

sum = (a < b ) && (b++) && (a++);
//  If && Found Any Wrong Condtion Then Only It will check other conditions 
//  Because And table Has 1 and 0 = 0 and 0 and 1 = 0 
// 0 Is False If First is False Then it will not perform any Front Operations
printf("%d\n",sum);
printf("%d\n",b);
printf("%d\n",a);


return 0;
}