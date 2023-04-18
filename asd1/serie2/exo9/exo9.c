#include <stdio.h>

int
main() {
  // Declaration
  int a, b, gcd;

  // Read two numbers
  do {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  } while(a == 0 || b == 0);
  
  // Finding the greatest common divisor (GCD)
  for (int i = 1; i <= a && i <= b; ++i) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  // Display the result
  printf("GCD(%d, %d) = %d\n", a, b, gcd);
}
