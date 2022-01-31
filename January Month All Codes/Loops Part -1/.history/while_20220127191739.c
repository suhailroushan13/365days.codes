#include <stdio.h>
int main() {
  int a, b, c;
  int i = 1;
  int count = 0;
  while (i <= 10) {
    printf("1 X %d = %d\n", i, i * 1);
    count += i;
    i++;
  }
  printf("%d\n", count);
  return 0;
}