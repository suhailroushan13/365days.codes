#include <stdio.h>
int main()
{
int a,b,c;
int count;
int sum;
int input;
printf("Enter the number till you want the sum :");
scanf("%d",&input);

sum = input*(input+1)/2;
for (int i = 1;i<10;i++)
{
 count += i;

  printf("%d\n", i);

  count++;
}

printf("%d\n",count);
return 0;
}