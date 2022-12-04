#include <stdio.h>

int
main() {
  int num, r, q, sum = 0;

  do {
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
  } while (num < 10000 || num > 99999 );

  r = num;
  q = num;
  while (q != 0) {
    r = q % 10;
    q /= 10;
    sum += r;
  }

  int middle_digit = num % 10000 % 1000 / 100;
  printf("Middle digit = %d\n", middle_digit);
  printf("Sum = %d\n", sum - middle_digit);
}
