#include <stdio.h>
int main() {
  int a, b, c;
  int i,j;

  printf("Enter the number of : ");
  scanf("%d %d", &i,&j);

 while(j<=6)
 {
   while (i <= 5) {
     printf("* ");
     i++;
     
   }
   printf("\n");
   j++;
 }
 
  

  return 0;
}