#include <stdio.h>

#define NUM 17

int
main() {
  int number_of_divisors = 0;

  // Count the number of divisors
  for (int i = 1; i <= NUM; ++i)
    if (NUM % i == 0)
      number_of_divisors++;

  if (number_of_divisors == 2)
    printf("%d is a prime number", NUM);
  else
    printf("%d is not a prime number", NUM);
}
