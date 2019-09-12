// program to delete last two digits.
#include<stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("The remaining no. is: %d\n", number/100);
  return 0;
}
