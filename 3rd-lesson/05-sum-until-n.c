#include <stdio.h>

int main()
{
  int n;
  printf("Enter your number: ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      sum = sum + i;
    }

    // Alternatively:
    // if (i % 3 != 0 && i % 5 != 0)
    // {
    //   continue;
    // }
    // sum = sum + i;
  }

  printf("Your number: %d\n", n);
  printf("Sum: %d", sum);
  return 0;
}