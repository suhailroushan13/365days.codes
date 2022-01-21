#include <stdio.h>
int main()
{
int a,b,c,max;
printf("Enter the number of a b c");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
    printf("A is bigger%d\n",a);
}
else if (b>c && b>a)
{
    printf("B is bigger%d\n",b);
}
else if (c>a && c>b)
printf("C is bigger%d\n",c);

return 0;
}