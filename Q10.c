// Write program to exchange last two digits.
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &nember);
  printf("Result: %d\n", (number/100)*100 + number%10 + (number/100)/10);
  return 0;
}
