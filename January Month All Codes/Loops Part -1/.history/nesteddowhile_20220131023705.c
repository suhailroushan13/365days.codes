#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the number : ");
scanf("%d %d",&a,&b);

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