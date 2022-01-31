#include <stdio.h>
int main() {
  int a, b, c;
  int i = 1;
  int count = 0;
  do {
      
    printf("2 X %d = %d\n", i,i*2);
    count += i;
    i++;

  } while (i <= 10);
  printf("%d\n",count);
  return 0;
}