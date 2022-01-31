#include <stdio.h>
int main() {
  int a, b, c;
  int row, col;
    printf("Enter the row and col :");
    scanf("%d %d", &row, &col);
    int i = 0;

    while (i < row) {
      int j = 0;
      while (j < col) {
        printf("*");
        j++;
      }
      printf("\n");
      i++;
    }

  return 0;
}