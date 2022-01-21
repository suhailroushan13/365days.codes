#include <stdio.h>
int main()
{
int add,sub,mul,mod,input,a,b;
float div,total,c,d;

printf("\n\n\n************ Welcome to Suhail Calculator *************\n\n");
printf("Select Operations : \n\n");
printf("Press 1 for Addition\n");
printf("Press 2 for Subtraction\n");
printf("Press 3 for Multiplication\n");
printf("Press 4 for Division\n");
printf("Press 5 for Modular\n\n\n");
scanf("%d",&input);

switch(input)
{
    case 1:
    printf("\n\nEnter the values of a :");
    scanf("%d",&a);
    printf("Enter the values of b :");
    scanf("%d", &b);

    add = a + b;
    printf("The Added Value us %d\n", add);
    break;

    case 2:
      printf("\n\nEnter the values of a :");
      scanf("%d", &a);
      printf("Enter the values of b :");
      scanf("%d", &b);

      sub = a - b;
      printf("The Subtracted Value us %d\n", sub);
      break;

    case 3:
      printf("\n\nEnter the values of a :");
      scanf("%d", &a);
      printf("Enter the values of b :");
      scanf("%d", &b);

      mul = a * b;
      printf("The Multiplied Value us %d\n", mul);
      break;

    case 4:
      printf("\n\nEnter the values of a :");
      scanf("%f", &a);
      printf("Enter the values of b :");
      scanf("%f", &b);

      div = a / b;
      printf("The Multiplied Value us %.2f\n", mul);
      break;
}





return 0;
}