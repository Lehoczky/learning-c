#include <stdio.h>
#include <string.h>

int main()
{
  char name[15];
  printf("Please enter your name: ");
  scanf("%s", name);

  if (strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0)
  {
    printf("Hello %s", name);
  }
  else
  {
    printf("Hello guest");
  }

  return 0;
}