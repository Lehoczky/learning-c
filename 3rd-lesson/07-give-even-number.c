#include <stdio.h>

int main()
{
  int n;
  int got_even = 0;

  while (!got_even)
  {
    printf("Please give me an even number: ");
    scanf("%d", &n);
    got_even = n % 2 == 0;
  }

  printf("Yaaaaaay!");

  return 0;
}