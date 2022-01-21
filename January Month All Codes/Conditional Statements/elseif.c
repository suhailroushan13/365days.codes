#include <stdio.h>
int main()
{
int a,b,c,max;
printf("Enter the number of a b c :");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c) // Here A must be greater than B and C
{
    printf("A is bigger %d\n",a);
}
else if (b>c && b>a) // Here B must be greater than A and C
{
    printf("B is bigger %d\n",b);
}
else if (c>a && c>b) // Here C must be greater than A and B
printf("C is bigger %d\n",c);

return 0;
}