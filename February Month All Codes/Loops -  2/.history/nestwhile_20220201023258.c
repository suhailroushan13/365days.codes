#include <stdio.h>
int main()
{
int a,b,c;
int row,col;
printf("Enter the number of rows and col :");
scanf("%d %d",&row,&col);
int i=1,j;
while(i<=row)
{
    printf("*");
    i++;
    j =1;
    while(j<=col)
    {  printf("\n");
        j++;
    }
}


return 0;
}