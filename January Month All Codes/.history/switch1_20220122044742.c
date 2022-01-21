#include <stdio.h>
int main() {

  char vowels;
  printf("Enter the Alphapbet :");
  scanf("%c", &vowels);

  switch (vowels) {

  default:
    printf("Its not a consonant or type a valid letter\n");
    break;

  case 'a':
    printf("Yes this is a vowel\n");
    break;
  case 'e':
    printf("Yes this is a vowel\n");
    break;
  case 'i':
    printf("Yes this is a vowel\n");
    break;
  case 'o':
    printf("Yes this is a vowel\n");
    break;
  case 'u':
    printf("Yes this is a vowel\n");
    break;
// Captail Vowels 
  case 'A':
    printf("Yes this is a vowel\n");
    break;
  case 'E':
    printf("Yes this is a vowel\n");
    break;
  case 'I':
    printf("Yes this is a vowel\n");
    break;
  case 'O':
    printf("Yes this is a vowel\n");
    break;
  case 'U':
    printf("Yes this is a vowel\n");
  }

  return 0;
}