#include <stdio.h>
int main() {
  int a, b, c;
  int row, col;
  printf("Enter the row and col :");
  scanf("%d %d", &row, &col);

  for(int i =1;i<=row;i++)
  {
      for(int j =1;j<=col;j++)
      {
          printf("* ");
      }
      printf("\n");
  }

  return 0;
}