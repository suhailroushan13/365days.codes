#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  printf("Enter a number : ");
  scanf("%d",&i);
  for (i; i <= 20; i++) {
    printf("%d ", i);
    if (i == 18)
      break;
      else if (i <= 0)
      printf("\nPlease Enter a positive number");
      break;
  }
  printf("\ncame outside of loop i = %d\n", i);
}