#include <stdio.h>
int main() {
  int age, b, c;

  printf("Enter the age :");
  scanf("%d", &age);
  /********************************

  Switch Statement can have multiple statements

  switch structure

1. To Follow A Case :
If Expression Matches Any Value it will be that Case

 printf("Enter the number :");
  scanf("%d", &number);
  switch(expression) // switch(number)
  {
      case value : // case 1: // if the user types 1 and the expression matches
with value printf("A"); // it will print A this case break; // Make a break to
stop at this case

// If value matches with user typed integer that case will be executed
      case value :
      printf("B");
      break; // Make a break to stop at this case

      case value :
      printf("C");
      break; // Make a break to stop at this case

  }

  ***************************************************/

  switch (age) {
  case 10:// if user typed age 10 this will be executed
    printf("Your Age is 10 years old %d\n", age);
    break;

  case 20: // if user typed age 20 this will be executed
    printf("Your Age is 20 years old %d\n", age);
    break;

  case 30: // if user typed age 30 this will be executed
    printf("Your Age is 30 years old %d\n", age);
    break;

  default:// if user typed other than integer like char or any random thing like jnjkrwnnjknqk
    printf("Your Age is Error\n"); // this will be executed
    break;
   

  }
// the next statement after case matches
  printf("Done with case\n");

  return 0;
}