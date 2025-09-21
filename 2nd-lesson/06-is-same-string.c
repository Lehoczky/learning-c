#include <stdio.h>
#include <string.h>

int main()
{
  char string_1[50];
  char string_2[50];

  printf("Enter your first string: ");
  scanf("%s", string_1);
  printf("Enter your second string: ");
  scanf("%s", string_2);

  if (strcmp(string_1, string_2) == 0)
  {
    printf("Same string");
  }
  else
  {
    printf("Different strings");
  }

  return 0;
}