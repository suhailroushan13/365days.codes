#include <stdio.h>
int main() {
  int a, b, c;
  int fia, count=0;;

  for (int i = 1; i <= 10; i++) {
    fia = i * 1;
    printf("1 X %d = %d\n", i, fia);
    count += fia;
    


  }
  printf("%d\n", count);

  return 0;
}