#include <stdio.h>
#include <math.h>

int
main() {
  // Declaration
  float x, result = 0.;
  int n;

  // Read X and N
  do {
    printf("Enter X and N: ");
    scanf("%f %d", &x, &n);
  } while(n <= 0);

  // Calculating p(x) = x^3 + x^2 + x^1 + 1
  for (int i = 0; i <= n; i++) {
    result += pow(x, i);
  }

  // Display the result
  printf("p(%.2f) = %.2f\n", x, result);
}
