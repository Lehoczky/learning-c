#include <stdio.h>

int x = 5;

void myFunction()
{
  printf("x: %d\n", x);
}

int main()
{
  x = x + 1;
  myFunction();

  printf("x: %d\n", x);
  return 0;
}