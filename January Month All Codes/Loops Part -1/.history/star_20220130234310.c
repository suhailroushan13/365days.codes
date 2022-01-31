#include <stdio.h>
int main()
{
int a=5,b,c;
printf("Enter the number of stars: ");
scanf("%d %d",&row);
// Nesting of Loops
for(int j=1;j<=row;j++) // Rows
{
  for (int i = 1; i <= col; i++) // Columns
  {
    printf("* ");
  }
  printf("\n");
  
}



return 0;
}

























// int i;
// while(i<=10)
// {
//   printf("* ");
//   i++;
// }

// do {
//   printf("* ");
//   i++;
// }
// while(i<=10);