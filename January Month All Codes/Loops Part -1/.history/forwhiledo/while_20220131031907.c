#include <stdio.h>
int main() {
  int a, b, c;
  int row, col, i = 1, j = 1;
  printf("Enter the row and col :");
  scanf("%d %d", &row, &col);

  while (i <= row) {

    while (j <= col) {
      printf("j");
      j++;
     
    }
   
    printf("i");

    i++;
  }
  return 0;
}