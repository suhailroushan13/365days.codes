#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the number : ");
scanf("%d",&a);

do{
  do {
    printf("*");
    a++;
  } while (a);
  printf("\n");
  b++;

}while(b);




return 0;
}