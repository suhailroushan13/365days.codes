#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the number of stars: ");
  scanf("%d", &a);
  for (int j=1;j<=2;j++)
{
  for (int i = 1; i <= a; i++)
    printf("*");
}
  return 0;
}