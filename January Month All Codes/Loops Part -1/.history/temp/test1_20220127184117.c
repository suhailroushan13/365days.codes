#include <stdio.h>
int main()
{
int a,b,c;
int count =0;

for(int i = 10; i >=1;i--)
{
    printf("%d\n",i);
    count += i;

}
printf("%d\n",count);
return 0;
}