#include <stdio.h>

int main()
{
  int x = 10;

  if (1)
  {
    printf("x: %d\n", x);
    int x = 15;
    printf("x: %d\n", x);
  }
  printf("x: %d\n", x);

  return 0;
}