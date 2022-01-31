#include <stdio.h>
int main() {
  int a, b, c;
  int i = 1;
  int count = 0;
  int fam;
  do {
      fam = i*2;
    printf("2 X %d = %d\n", i,fam);
    count += fam;
    i++;

  } while (i <= 10);
  printf("%d\n",count);
  return 0;
}