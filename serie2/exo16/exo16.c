#include <stdio.h>

int
main() {
  int a = 16, b = 5;

  printf("Using (/) operator: \n");
  printf("A / B = %d\n", a / b);

  printf("Without using (/) operator: \n");
  int number_of_divisors = 0;
  while (a >= b) {
    a -= b;
    number_of_divisors++;
  }
  printf("A / B = %d\n", number_of_divisors);
}
