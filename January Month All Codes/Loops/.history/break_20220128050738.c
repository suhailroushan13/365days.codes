#include <stdio.h>
#include <stdlib.h>
void main() {
  int i;
  for (i = 0; i < 20; i++) {
    printf("%d ", i);
    if (i == 5)
      break;
  }
  printf("came outside of loop i = %d\n", i);
}