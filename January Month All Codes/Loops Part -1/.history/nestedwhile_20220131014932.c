#include <stdio.h>
int main() {
  int a, b, c;

  printf("Enter the number of : ");
  scanf("%d", &a);

  while (a <= 5) {

    printf("X");
    a++;
    while(a<=7)
    {
      printf("\n");
    }
  }

  return 0;
}