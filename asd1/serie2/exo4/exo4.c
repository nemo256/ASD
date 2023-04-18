#include <stdio.h>

int
main() {
  // Declaration and initializing result to 1
  // result is 1 instead of 0 because of multiplication (0 * _ = 0)
  int a, n, result = 1;

  // Getting a and n
  printf("Enter a and n: ");
  scanf("%d %d", &a, &n);

  // Calculating a^n
  for (int i = 0; i < n; ++i)
    result *= a;

  printf("%d^%d = %d\n", a, n, result);
}
