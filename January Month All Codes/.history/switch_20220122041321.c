#include <stdio.h>
int main() {
  int age, b, c;

  printf("Enter the age :");
  scanf("%d", &age);
  /********************************

  Switch Statement can have multiple statements

  switch structure


  switch(expression)
  {
      case value :
      printf("A");

      case value :
      printf("B");

      case value :
      printf("C");

  }
























  ***************************************************/

  switch (age) {
  case 10:
    printf("Your Age is 10 years old %d\n", age);
    break;

  case 20:
    printf("Your Age is 20 years old %d\n", age);
    break;

  case 30:
    printf("Your Age is 30 years old %d\n", age);
    break;

  default:
    printf("Your Age is Error\n");
  }

  printf("Haa Bolo Bhai Hogaya switch");

  return 0;
}