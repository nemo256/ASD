#include <stdio.h>

int
main() {
  // Explicit 4 digit number
  int number, d1, d2, d3, d4;

  do {
    printf("Enter a 4 digit number: ");
    scanf("%d", &number);
  } while (number < 1000 || number > 9999 );
  
  d1 = number / 1000;
  d2 = number % 1000 / 100;
  d3 = number % 1000 % 100 / 10;
  d4 = number % 1000 % 100 % 10;

  printf("d1: %d\n", d1);
  printf("d2: %d\n", d2);
  printf("d3: %d\n", d3);
  printf("d4: %d\n", d4);

  number = (d4 * 1000) + (d3 * 100) + (d2 * 10) + d1;
  printf("New number = %d\n", number);
}
