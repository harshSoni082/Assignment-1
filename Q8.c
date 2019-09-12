// program to double the last digit.
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("Result: %d\n", number/10 *10 + 2*(number%10));
  return 0;
}
