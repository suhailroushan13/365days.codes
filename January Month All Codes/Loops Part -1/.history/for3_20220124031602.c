#include <stdio.h>
int main() {
  int a, b, c;
  int count;
  int sum;
  int input;
  printf("Enter the number till you want the sum :");
  scanf("%d", &input);

  sum = input * (input + 1) / 2;
  // for sum then use for loop
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
  }
  printf("%d\n", sum);

  return 0;
}