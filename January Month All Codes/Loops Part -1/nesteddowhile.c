#include <stdio.h>
int main() {
  int a, b, c, i, j;
  printf("Enter the number : ");
  scanf("%d %d", &a, &b);


  do {

    do {
      printf("*");
      a++;


    } while (a < 10);
    printf("\n")
  }while(a<10);

  return 0;
}