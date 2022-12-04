#include <stdio.h>
#include <math.h>

int
main() {
  float x = 0.8, result = 0.0;
  int n = 3;

  // Calculating p(x) = x^3 + x^2 + x^1 + 1
  for (int i = 1; i <= n; i++)
    result += pow(x, i);
  result++;

  printf("p(%.2f) = %.2f\n", x, result);
}
