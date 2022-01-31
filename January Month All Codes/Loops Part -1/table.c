#include <stdio.h>
int main()
{
int a,b,c;
int num,till,number;
int last,count =0;
int ok;
while(ok)
{
printf("Enter a number : ");
scanf("%d %d",&num,&number);
if (num <= 0)
{
  printf("Zero or negative number cannot be entered.\n");
break;
}
for(num=1;num<=10;num++) 
{
 
  last = num;
  printf("%d X %d = %d\n", number, num, num * number);
  count += last + number;
  

}
printf("The Count is %d\n",count);
ok++;
break;
}

return 0;
}