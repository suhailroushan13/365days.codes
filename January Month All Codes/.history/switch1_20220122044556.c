#include <stdio.h>
// #define a 
// #define e
// #define i
// #define o
// #define u
int main()
{
// int a,b,c;
char vowels;
printf("Enter the Alphapbet :");
scanf("%c",&vowels);

switch(vowels)
{

default:printf("Its not a consonant or type a valid letter");
break;

case 'a':
  printf("Yes this is a vowel");
  break;
case 'e':
  printf("Yes this is a vowel");
  break;
case 'i':
  printf("Yes this is a vowel");
  break;
case 'o':
  printf("Yes this is a vowel");
  break;
case 'u':
  printf("Yes this is a vowel");
  break;

case 'A':
  printf("Yes this is a vowel");
  break;
case 'E':
  printf("Yes this is a vowel");
  break;
case 'I':
  printf("Yes this is a vowel");
  break;
case 'O':
  printf("Yes this is a vowel");
  break;
case 'u':
  printf("Yes this is a vowel");
}

return 0;
}