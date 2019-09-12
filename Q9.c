// program to delete the second last digit.
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Result: %d\n", (number/100)*10 + number%10);
  return 0;
}
