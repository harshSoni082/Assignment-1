// program which reads 4 numbers a, b, c and p. Let f(x) = ax2 + bx + c be a function, outputs the value of f(p).
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, p, res;
  printf("Enter the value of coeficients and p: ");
  scanf("%d%d%d%d",&a, &b, &c, &p);
  res=a*pow(p, 2) + b*p + c;
  printf("Result: %d\n", res);
  return 0;
}
