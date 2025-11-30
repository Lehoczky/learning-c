#include <stdio.h>

void myFunction()
{
  int x = 5;
  printf("x: %d\n", x);
}

int main()
{
  int x = 15;
  printf("x: %d\n", x);

  myFunction();

  printf("x: %d\n", x);
  return 0;
}
