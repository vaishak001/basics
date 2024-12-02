#include <stdio.h>
int main ()
{
  float km, m, cm, in, ft;
  printf("Enter the distance in km ");
  scanf("%f", &km);
  m = km * 1000;
  cm = m * 100;
  in = cm / 2.54;
  ft = in / 12;
  printf("Distance in meters is  %f\n", m);
  printf("Distance in centimeters is  %f\n", cm);
  printf("Distance in inches is  %f\n", in);
  printf("Distance in feet is  %f\n", ft);
}