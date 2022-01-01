#include<stdio.h>
#include<conio.h>

void main()
{
  int i,no;
  clrscr();
  printf("Enter any num: ");
  scanf("%d",&no);
  if(no==1)
  {
  printf("Smallest Prime no. is 2");
  }
  for(i=2;i<no;i++)
  {
  if(no%i==0)
  {
  printf("Not Prime no.");
  break;
  }
  }
 if(no==i)
 {
 printf("Prime no.");
 }
  getch();
}