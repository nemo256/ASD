#include <stdio.h>

int
main() {
  // Declaration
  int num, number_of_divisors = 0;

  // Read a number
  do {
    printf("Enter a number: ");
    scanf("%d", &num);
  } while(num <= 0 || num > 100);

  // Count the number of divisors
  for (int i = 1; i <= num; ++i)
    if (num % i == 0)
      number_of_divisors++;

  if (number_of_divisors == 2)
    printf("%d is a prime number", num);
  else
    printf("%d is not a prime number", num);
}
