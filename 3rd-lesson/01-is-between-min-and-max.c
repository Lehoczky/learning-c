#include <stdio.h>

int main()
{
  int min;
  int max;
  int number;

  printf("Enter min: ");
  scanf("%d", &min);

  printf("Enter max: ");
  scanf("%d", &max);

  if (min > max)
  {
    printf("The minimum value cannot be larger than the maximum!");
    return 1;
  }

  printf("Enter your number: ");
  scanf("%d", &number);

  if (number > min && number < max)
  {
    printf("The number %d is between %d and %d", number, min, max);
  }
  else
  {
    printf("The number %d is not between %d and %d", number, min, max);
  }

  return 0;
}