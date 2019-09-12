// program to find area of rectangle
#include <stdio.h>

int main()
{
  float length, bredth;
  printf("Enter the length and bredth of rectangle: ");
  scanf("%f%f", &length, &bredth);
  printf("Area of rectangle: %.2f\n", length*bredth);
  return 0;
}
