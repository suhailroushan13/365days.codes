#include <stdio.h>
int main()
{
int a,b,c;
int num,till,number;
int last,count =0;

printf("Enter a number : ");
scanf("%d %d",&num,number);
for(num;num<=10;num++) 
{
    last = num*num;
    printf("%d X %d = %d\n",number,num,last);
    count += last;

}
printf("The Count is %d\n",count);
return 0;
}