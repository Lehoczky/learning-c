#include <stdio.h>

int main()
{
  int n;
  printf("How many times should I say hello? ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Hello!\n");
  }

  return 0;
}