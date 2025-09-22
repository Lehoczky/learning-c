#include <stdio.h>

int main()
{
  int a;
  int b;

  printf("A: ");
  scanf("%d", &a);

  printf("B: ");
  scanf("%d", &b);

  for (int i = a; i < b; i++)
  {
    printf("%d", i);
    if (i != b - 1)
    {
      printf(", ");
    }
  }

  return 0;
}