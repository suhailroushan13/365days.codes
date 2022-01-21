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

  default:// if user typed other than integer like char or any random thing like jnjkrwnnjknqk or
  // if its didn't matches all cases then the default will executed'
    printf("Your Age is Error\n"); // this will be executed
    break;
   
 
  }
// the next statement after case matches
  printf("Done with case\n");

  return 0;
}


// No Duplicate Cases Allowed
// Case Values should be Integral or Constant Value Only
//  No Float data type is allowed because you can't have case 1.34 :
// you can't have variable expression in case like case x : or case age :
// You Can Have Case 3+3:
// You Can have Case 3+4*5:
// Default statement you can add anywhere in switch statement
// but default statement will only executed if all cases are not matched

// if you want to use variable expression
// then add below lines after header file lines
// #define x 2
// #define y 4
// now you can have case x : which will print the value 2  its like x = 2 in define 

