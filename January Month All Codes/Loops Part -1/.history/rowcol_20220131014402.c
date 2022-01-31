#include <stdio.h>
int main() {
  int a = 5, b, c;
  int row, col;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &row, &col);
  // Nesting of Loops
  for (int j = 1; j <= row; j++) // Rows
  {
    for (int i = 1; i <= col; i++) // Columns
    {
     
      printf("X ");
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