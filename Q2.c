// program to read two numbers and display the sum of square of the first and cube of the second
#include <stdio.h>
#include <math.h>

int main()
{
  int num_1, num_2, sum = 0;
  printf("Enter two numbers: ");
  scanf("%d%d",&num_1, &num_2);
  printf("Result: %d\n", pow(num_1, 2)+pow(num_2, 3));
  return 0;
}
