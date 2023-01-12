#include <stdio.h>

int
main() {
  // Declaration
  int num, r, q, sum = 0;

  // Read a 5 digit number
  do {
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
  } while (num < 10000 || num > 99999 );

  // Get the sum of the digits
  r = num;
  q = num;
  while (q != 0) {
    r = q % 10;
    q /= 10;
    sum += r;
  }

  // Get the digit in the middle
  int middle_digit = num % 10000 % 1000 / 100;

  // Display the results
  printf("Middle digit = %d\n", middle_digit);
  printf("Sum = %d\n", sum - middle_digit);
}
