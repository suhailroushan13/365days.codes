#include <stdio.h>
int main() {
  int a, b, c;
  int row, col;
  printf("Enter the number of rows and col :");
  scanf("%d %d", &row, &col);
  int i = 1;
  while (i <= row) {
    printf("*");
    i++;
    int j = 1;
    while (j <= col)

    {

      printf("\n");
      j++;
    }
  }

  return 0;
}