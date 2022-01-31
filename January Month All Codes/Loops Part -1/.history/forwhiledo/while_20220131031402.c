#include <stdio.h>
int main() {
  int a, b, c;
  int row, col, i = 1, j = 1;
  printf("Enter the row and col :");
  scanf("%d %d", &row, &col);

  while (i <= row) {
      
    while (j <= row) {
      printf("* ");
      j++;
    }
    printf("\n");

    i++;
  }
  return 0;
}