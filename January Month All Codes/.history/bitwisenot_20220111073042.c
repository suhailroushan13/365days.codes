#include <stdio.h>

int main() {
  int num = 8;

  // ~num yields 1s complement of num
  printf("1s complement of %d = %d\n", num, (~num));

  // (~num + 1) yields 2s complement of num
  printf("2s complement of %d = %d\n", num, (~num + 1));

  // Bitwise not is n = -(n+1)
  /********************************



  *********************************/

  return 0;
}