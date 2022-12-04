#include <stdio.h>
#include <math.h>

int
main() {
  int num, r, q, sum = 0;

  do {
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
  } while (num < 100 || num > 999 );

  r = num;
  q = num;
  while (q != 0) {
    r = q % 10;
    q /= 10;
    sum += pow(r, 3);
  }

  printf("Sum = %d\n", sum);
}
