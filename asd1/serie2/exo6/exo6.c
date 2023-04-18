#include <stdio.h>

int
main() {
  // Declaration
  int a, b;

  // Read two numbers
  do {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  } while(a == 0 || b == 0);

  // Initialize remainder as a
  int remainder = a;

  // Calculating the remainder of a / b
  while (remainder >= b)
    remainder -= b;

  if (remainder == 0)
    printf("%d is divisible by 2.\n", a);
  else
    printf("%d is not divisible by 2.\n", a);
}
