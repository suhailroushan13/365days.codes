#include <stdio.h>
int main() {
  int a = 10, b = 5, c;

  printf("%d\n",
         a < b || b < a); // 0 and 1 ..here i found there is 1 then print 1
  printf("%d\n", a == b || b == a); // there both are 0 then print output 0

  /**************

  Logical OR
      x   y  |  xy
  -----------+-----------
      0   0  |  0
      0   1  |  1
      1   0  |  1
      1   1  |  1

  In this  the same condition will get the same value like 0 and 0 is 0
  and 1 and 1 is 1
  if there is again any 1 then print 10

  or

  It will only print 0 if both conditions are false




  ***************/

  return 0;
}