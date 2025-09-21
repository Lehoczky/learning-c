#include <stdio.h>

int main()
{
  float number;
  printf("Enter your number: ");
  scanf("%f", &number);

  float absolute;
  if (number >= 0)
  {
    absolute = number;
  }
  else
  {
    absolute = number * -1;
  }

  printf("Absolute value: %.2f", absolute); // <-- introducing decimal place limiter
  return 0;
}