#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  printf("")
  for (i; i <= 20; i++) {
    printf("%d ", i);
    if (i == 18)
      break;
      else if (i <= 0)
      printf("Please Enter a positive number");
  }
  printf("\ncame outside of loop i = %d\n", i);
}