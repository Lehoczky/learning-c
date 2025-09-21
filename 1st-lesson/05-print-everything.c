#include <stdio.h>

int main()
{
  int number = 2;
  long big_number = 2147483640;
  float fraction = 1.15;
  char character = 'c';
  char text[] = "My text";

  printf("number: %d\nbig number: %ld\nFraction: %f\nCharacter: %c\nText: %s\n", number, big_number, fraction, character, text);

  return 0;
}