#include <stdio.h>
#include <math.h>

int
main() {
  float a = 2, b = 9, c = 6;

  printf("Solution 1 = %f\n",
      (-b + sqrt(pow(b, 2) - 4 * a * c)) / (float)(2 * a));
  printf("Solution 2 = %f\n",
      (-b - sqrt(pow(b, 2) - 4 * a * c)) / (float)(2 * a));
}
