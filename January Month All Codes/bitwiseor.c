#include <stdio.h>
int main() {
  int a = 10, b = 5, c;

  printf("%d\n", a & b);
  printf("%d\n", a | b);

  // for logical &
  // 1010
  // 0101
  //-------
  // 0000  which is in decimal is 0

  // for logical |
  //  1010
  //  0101
  //-------
  //  1111 which is in decimal is 15

  printf("-------------------\n");

  printf("Because both numbers are different So False\n");
  // False False is Always is False
  //  1 and 1 is Always 1
  printf("a is 10 and b is 5 both are different so False\n");

  printf("%d\n", a && b);
  printf("%d\n", a || b);

  return 0;
}