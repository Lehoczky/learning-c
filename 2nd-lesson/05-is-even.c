#include <stdio.h>

int main()
{
  int number;
  printf("Enter your number: \n");
  scanf("%d", &number);

  // 0 - false
  // 1 - true
  int is_even = number % 2 == 0;
  if (is_even)
  {
    printf("Number is even");
  }
  else
  {
    printf("number is odd");
  }
  return 0;
}