#include <stdio.h>
int main()
{
int a,b,c;
a = 2;
b = 4;

printf("%d\n",--a);
// Pre fix
// the --a will decrease the number with -1 and it show it rapidy when u print

printf("%d\n",b--);
printf("%d\n",b);
// Post fix
// the b-- will decrease the number with -1 and it show it same as 4 but when u print it again 2nd time
// then it will show 3

return 0;
}