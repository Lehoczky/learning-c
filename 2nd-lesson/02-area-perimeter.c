#include <stdio.h>

int main()
{
  // // Square
  // float a = 5;
  // float perimeter = 4 * a;
  // float area = a * a;
  // printf("Given a square with side 'a'=%f\n", a);
  // printf("Square perimeter: %fm\n", perimeter);
  // printf("Square area: %fm2", area);

  // // Circle
  // float r = 10;
  // float pi = 3.14;
  // float perimeter = 2 * r * pi;
  // float area = r * r * pi;
  // printf("Given a circle with the radius=%f\n", r);
  // printf("Circle permeter: %fm\n", perimeter);
  // printf("Circle area: %fm2", area);

  // Rectangle
  float a = 5;
  float b = 10;
  float perimeter = 2 * (a + b);
  float area = a * b;
  printf("Given a rectangle with side 'a'=%f and side b=%f\n", a, b);
  printf("Rectangle perimeter: %fm\n", perimeter);
  printf("Rectangle area: %fm2", area);

  return 0;
}