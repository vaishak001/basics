#include <stdio.h>
int main()
{
  float bp, da, hra, grpay;
  printf("\nEnter Basic Salary ");
  scanf("%f", &bp);
  da = 0.4 * bp;
  hra = 0.2 * bp;
  grpay = da + hra + bp;
  printf("Basic Salary is = %f\n", bp);
  printf("Dearness Allowance = %f\n", da);
  printf("House Rent Allowance = %f\n", hra);
  printf("Gross Pay = %f\n", grpay);
}