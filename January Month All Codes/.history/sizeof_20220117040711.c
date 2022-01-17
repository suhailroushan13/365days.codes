#include <stdio.h>
int main()
{
int a;
float b;  
char c;
double d;

// sizeof Operator need format specifier of %ld only

printf(" char %ld\n", sizeof(char));
printf(" short int %ld\n", sizeof(short int));
printf(" int %ld\n",sizeof(int));
printf(" long int %ld\n", sizeof(long int));
printf(" float %ld\n", sizeof(float));
printf(" double %ld\n", sizeof(double));
printf(" long double %ld\n", sizeof(long double));



return 0;
}