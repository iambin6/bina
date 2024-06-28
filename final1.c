#include <stdio.h>

int main() {
  double a, b, c, x;
  printf("Enter the value of a: ");
  scanf("%lf", &a);
  printf("Enter the value of b: ");
  scanf("%lf", &b);
  printf("Enter the value of c: ");
  scanf("%lf", &c);
  x = (c + b) / a;
  printf("x = %.2lf\n", x);

  return 0;
}