#include<stdio.h>

void main()
{
char choice;
int a,b,res=0;
//clrscr();
printf("Enter First value: ");
scanf("%d",&a);
printf("\n Enter Operator: ");
//choice=getch();
printf("\n Enter Second value: ");
scanf("%d",&b);

switch(choice)
{
case '+':
  res=a+b;
  printf("Sum: %d",res);
break;
case '-':
  res=a-b;
  printf("Difference: %d",res);
break;
case '*':
  res=a*b;
  printf("Product: %d",res);
break;
case '/':
  res=a/b;
  printf("Quotient: %d",res);
break;
default:
  printf("Enter Valid Operator!!");
}

}