// program to print the second last digit.
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number :");
  scanf("%d", &number);
  printf("Second last digit: %d\n", (number%100)/10);
  return 0;
}
