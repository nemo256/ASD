#include <stdio.h>
#include <math.h>

int
main() {
  // Declaration
  int num, r, q, sum = 0;

  // Read a 3 digit number
  do {
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
  } while (num < 100 || num > 999 );

  // Get the sum of digits^3
  r = num;
  q = num;
  while (q != 0) {
    r = q % 10;
    q /= 10;
    sum += pow(r, 3);
  }

  // Display the result
  printf("Sum = %d\n", sum);
}
