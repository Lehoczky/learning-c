#include <stdio.h>
#include <string.h>

int main()
{
  char shape[50];
  int valid_shape_entered = 0;
  printf("Enter the shape you want to calculate the perimeter and area.\n");
  printf("Options are:\n  -square\n  -circle\n  -rectangle\n");

  while (!valid_shape_entered)
  {
    printf("Shape you choose: ");
    scanf("%s", shape);
    valid_shape_entered = strcmp(shape, "square") == 0 || strcmp(shape, "rectangle") == 0 || strcmp(shape, "circle") == 0;
  }

  printf("------------------\n\n");

  if (strcmp(shape, "square") == 0)
  {
    float a;
    printf("Please enter a: ");
    scanf("%f", &a);

    float perimeter = 4 * a;
    float area = a * a;
    printf("Given a square with side 'a'=%.2f\n", a);
    printf("Square perimeter: %.2fm\n", perimeter);
    printf("Square area: %.2fm2", area);
  }
  else if (strcmp(shape, "circle") == 0)
  {
    float r;
    printf("Please enter r: ");
    scanf("%f", &r);

    float pi = 3.14;
    float perimeter = 2 * r * pi;
    float area = r * r * pi;
    printf("Given a circle with the radius=%.2f\n", r);
    printf("Circle permeter: %.2fm\n", perimeter);
    printf("Circle area: %.2fm2", area);
  }
  else if (strcmp(shape, "rectangle") == 0)
  {
    float a;
    float b;

    printf("Please enter a: ");
    scanf("%f", &a);
    printf("Please enter b: ");
    scanf("%f", &b);

    float perimeter = 2 * (a + b);
    float area = a * b;
    printf("Given a rectangle with side 'a'=%.2f and side b=%.2f\n", a, b);
    printf("Rectangle perimeter: %.2fm\n", perimeter);
    printf("Rectangle area: %.2fm2", area);
  }
  else
  {
    printf("Unknown shape: %s", shape);
  }

  return 0;
}