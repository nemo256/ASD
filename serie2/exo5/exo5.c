#include <stdio.h>

int
main() {
  // Suppose we want to do (a / b)
  int a = 4, b = 2, remainder;

  // Calculating the remainder of a / b
  remainder = a;
  while (remainder >= b)
    remainder -= b;

  printf("%d mod %d = %d\n", a, b, remainder);
}
