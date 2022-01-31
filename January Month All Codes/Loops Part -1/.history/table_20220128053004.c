#include <stdio.h>
int main()
{
int a,b,c;
int num,till,number;
int last,count =0;
while(1)
printf("Enter a number : ");
scanf("%d %d",&num,&number);
for(num;num<=10;num++) 
{
    last = num;
    printf("%d X %d = %d\n",number,num,num*number);
    count += last;

}
printf("The Count is %d\n",count);
return 0;
}