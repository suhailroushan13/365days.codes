#include <stdio.h>
int main()
{
int a=10,b=10,c=15;

//  XOR TABLE
//  0  0  - 0
//  0  1  - 1
//  1  0  - 1
//  1  1  - 0

printf("%d\n",a^b);
// Here both a and b are same ...same number will get True = 0
// Binary of a and b 
//  10 is 1010 
//   1010 
//   1010 
// ---------
//   0000 so the answer is 0


printf("%d\n", a ^ c);
// Here both a and b are different ...differnent number will 
// Binary of a and b
//  10 is 1010
//   1010
//   1111
// ---------
//   0101 so the answer is 5

return 0;
}