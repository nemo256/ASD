#include <stdio.h>

int
main() {
  // Explicit 4 digit number
  int number, d1, d2, d3, d4;

  // Read a 4 digit number
  do {
    printf("Enter a 4 digit number: ");
    scanf("%d", &number);
  } while (number < 1000 || number > 9999 );
  
  // Get each digit
  d1 = number / 1000;
  d2 = number % 1000 / 100;
  d3 = number % 1000 % 100 / 10;
  d4 = number % 1000 % 100 % 10;

  // Re-order the digits
  number = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;

  // Display the result
  printf("New number = %d\n", number);
}
