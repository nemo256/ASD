#include <stdio.h>

int
main() {
  int a = 4, b = 2, remainder = a;

  // Calculating the remainder of a / b
  while (remainder >= b)
    remainder -= b;

  if (remainder == 0)
    printf("%d is divisible by 2.\n", a);
  else
    printf("%d is not divisible by 2.\n", a);
}
