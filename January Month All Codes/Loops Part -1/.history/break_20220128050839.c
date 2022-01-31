#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  for (i = 1; i <= 20; i++) {
    printf("%d ", i);
    if (i == 5)
    //   break;
  }
  printf("\ncame outside of loop i = %d\n", i);
}