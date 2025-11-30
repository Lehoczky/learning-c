#include <stdio.h>

int isEven(int n)
{

  return n % 2 == 0;
}

int main()
{
  int number = 10;

  if (isEven(number))
  {
    printf("%d is even", number);
  }
  else
  {
    printf("%d is odd", number);
  }

  return 0;
}