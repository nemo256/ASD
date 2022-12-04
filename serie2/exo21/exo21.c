#include <stdio.h>

int
main() {
  float temp, sqrt, num = 16;

  temp = 0;
  sqrt = num / 2.0;
  while (sqrt != temp) {
    temp = sqrt;
    sqrt = ((num / temp) + temp) / 2.0;
  }

  printf("the square root of '%.2f' is '%.2f'\n", num, sqrt);
}
