#include <stdio.h>
int main()
{
int a,b,c;
int num,till;
int last,count =0;

printf("Enter a number : ");
scanf("%d ",&num);
for(num;num<=10;num++) 
{
    last = num*num;
    printf("%d X %d = %d\n",num,num,last);
    count += last;

}
printf("The Count is %d\n",count);
return 0;
}