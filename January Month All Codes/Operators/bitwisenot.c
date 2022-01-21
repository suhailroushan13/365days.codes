#include <stdio.h>

int main() {
  int num = 8;

printf("Bitwise NOT ~ [ N = -(N+1) ]\n");
  // ~num yields 1s complement of num
  printf("1s complement of %d = %d\n", num, (~num));

  // (~num + 1) yields 2s complement of num
  printf("2s complement of %d = %d\n", num, (~num + 1));

  // Bitwise not is n = -(n+1)
  /********************************
  0  1    operand1
  -----
  1  0   ~operand1


 int a = 103;  // binary:  0000000001100111
 int b = ~a;   // binary:  1111111110011000 = -104






  *********************************/

  return 0;
}