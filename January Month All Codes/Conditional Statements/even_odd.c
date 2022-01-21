#include<stdio.h>
int main ()
{
    int even,odd,input;

    printf("Enter the number : ");
    scanf("%d",&input);

    if(input%2 == 0)
    {
      printf("The number %d is Even\n ", input);
    }
    else
      printf("The number %d is Odd\n ", input);
}