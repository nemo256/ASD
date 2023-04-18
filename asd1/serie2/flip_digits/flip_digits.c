#include <stdio.h>

int
main() {
  int N = 512, remainder = N, quotient = N, new_number = 0;

  printf("Before: %d\n", N);

  while (quotient != 0) {
    remainder = quotient % 10;
    quotient = quotient / 10;
    new_number *= 10;
    new_number += remainder;
  }

  printf("After = %d\n", new_number);
}
