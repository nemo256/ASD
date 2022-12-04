#include <stdio.h>

#define A 15
#define B 10

int
main() {
  int gcd;
  
  // Finding the greatest common divisor (GCD)
  for (int i = 1; i <= A && i <= B; ++i)
    if (A % i == 0 && B % i == 0)
      gcd = i;

  printf("GCD(%d, %d) = %d\n", A, B, gcd);
}
