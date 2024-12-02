#include <stdio.h>
int main ()
{
  float l, w, r, area_rectangle, perimeter, area_circle, circumfrence;
  printf("Enter the length, width of the rectangle ");
  scanf("%f, %f", &l,&w);
  area_rectangle = (l * w);
  perimeter = (l + w) * 2;
  printf("Area & perimeter of rectangle are = %f, %f ", area_rectangle, perimeter);
  printf("\nEnter the radius of the circle ");
  scanf("%f", &r );
  area_circle = (3.14) * r * r;
  circumfrence = 2 * r * (3.14);
  printf("Area & circumfrence of circle are = %f, %f ", area_circle, circumfrence);
}