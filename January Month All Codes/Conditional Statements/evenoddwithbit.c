#include <stdio.h>
int main() {
  int a, b, c;


  // Use & 1 to find the even odd numbers
  // & 1 always gives odd number 
  // if a is 10 
//    a = 10 = 1010
//   10 & 1 

// 1010 
// 0001
// 0000  which is 0 


/* 
example 2: 

15 & 1

15 is 1111 and 1 is 0001 

1111
0001
------
0001
--------

0001 is 1 in decimal is Odd


*/

  printf("Enter the number : ");
  scanf("%d", &a);

  if (a & 1) {
    printf("The number is Odd\n");

  }

  else
    printf("The number is Even\n");
  return 0;
}