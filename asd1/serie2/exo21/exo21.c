#include <stdio.h>

int
main() {
  // Declaration
  float temp, sqrt, num = 16;

  // Find the square root (basic method)
  temp = 0;
  sqrt = num / 2.0;
  while (sqrt != temp) {
    temp = sqrt;
    sqrt = ((num / temp) + temp) / 2.0;
  }

  // Display the result
  printf("the square root of '%.2f' is '%.2f'\n", num, sqrt);
}
