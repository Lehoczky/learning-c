#include <stdio.h>

int main()
{
  float a;
  printf("Enter your number: ");
  scanf("%f", &a);

  if (a < 0)
  {
    printf("A is negative");
  }
  else if (a > 0)
  {
    printf("A is positive");
  }
  else
  {
    printf("A is exactly 0");
  }

  return 0;
}
