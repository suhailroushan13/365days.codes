#include <stdio.h>
int main() {
  int a, b, c;
  int row, col, i = 1, j = 1;
  printf("Enter the row and col :");
  scanf("%d %d", &row, &col);

  while (j <= row) {

    while (j <= row) {
      printf("* ");
      j++;
    }

    i++;
    printf("\n");
  }
  return 0;
}