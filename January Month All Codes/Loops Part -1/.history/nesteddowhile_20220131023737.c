#include <stdio.h>
int main()
{
int a,b,c,i,j;
printf("Enter the number : ");
scanf("%d %d",&a,&b);

do{
  do {
    printf("*");
    i++;
  } while (a<10);
  printf("\n");
  b++;

}while(b<10);




return 0;
}