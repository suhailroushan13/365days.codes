#include <stdio.h>
int main() {
  int a, b, c;
  int fia, count = 0;
  ;

  for (int i = 1; i <= 10; i++) {
    fia = i * 2;
    printf("2 X %d = %d\n", i, fia);
    count += fia;
    // or Use (n)*(n+1)/2
  }
  printf("The Sum is : %d\n", count);

  return 0;
}