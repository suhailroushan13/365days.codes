#include <stdio.h>
int main() {
  int a, b, c;
  int row, col, i = 1, j = 1;
  printf("Enter the row and col :");
  scanf("%d %d", &row, &col);

  while ( i <= row) {
    printf("* ");
    j++;
    while ( j <= col) {
     
    }
    i++;
    printf("\n");
  }
  return 0;
}