#include <stdio.h>

int
main() {
  // Suppose we want to do (a / b)
  int a, b, remainder;

  // Read two numbers
  do {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  } while(a == 0 || b == 0);

  // Calculating the remainder of a / b
  remainder = a;
  while (remainder >= b)
    remainder -= b;

  printf("%d mod %d = %d\n", a, b, remainder);
}
