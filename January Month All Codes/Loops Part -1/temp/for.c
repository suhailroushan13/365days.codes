#include <stdio.h>
int main()
{
int a,b,c;
int count;
// If there is no condition then you will get an infinite loop
for(int i = 1;; i++)
{
count++;
printf("Hello %d\n",count);
}
return 0;
}