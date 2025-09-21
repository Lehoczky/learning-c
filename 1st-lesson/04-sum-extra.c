#include <stdio.h>

int main()
{
  int a;
  int b;

  printf("Please enter your first number: ");
  scanf("%d", &a);

  printf("Please enter your first number: ");
  scanf("%d", &b);

  int c = a + b;

  printf("%d + %d = %d", a, b, c);

  return 0;
}