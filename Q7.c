// program to find the sum of last two digits
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Sum of last two digits: %d\n", (number%100)/10 + number%10);
  return 0;
}
