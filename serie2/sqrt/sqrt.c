#include <stdio.h>

int
main() {
  float a0, sqrt, A = 16;

  a0 = 0;
  sqrt = A / 2.0;
  while (sqrt != a0) {
    a0 = sqrt;
    sqrt = ((A / a0) + a0) / 2.0;
  }

  printf("the square root of '%.2f' is '%.2f'\n", A, sqrt);
}

