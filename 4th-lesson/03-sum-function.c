#include <stdio.h>

int isEven(int a, int b)
{
  int sum = a + b;
  return sum;
}

int main()
{
  int total = isEven(10, 12);
  printf("The total is: %d\n", total);
  return 0;
}