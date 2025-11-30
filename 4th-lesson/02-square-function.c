#include <stdio.h>

void calculateSquare(int number)
{
  int square = number * number;
  printf("The square of %d is %d\n", number, square);
}

int main()
{
  calculateSquare(10);
  return 0;
}