#include <stdio.h>
int main() {
  int a, b, c;
  int row, col, i = 1, j = 1;
    printf("Enter the row and col :");
    scanf("%d %d", &row, &col);
    int i = 0;

    while (i < 5) {
      int j = 0;
      while (j < 5) {
        printf("*");
        j++;
      }
      printf("\n");
      i++;
    }

  return 0;
}