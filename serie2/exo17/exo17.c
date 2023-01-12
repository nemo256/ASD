#include <stdio.h>

int
main() {
  // Declaration
  int num, sum = 0;

  // Read a number
  do {
    printf("Enter a number: ");
    scanf("%d", &num);
  } while(num <= 0 || num > 100);

  for (int i = 1; i <= num / 2; ++i) {
    if (num % i == 0) {
      sum += i;
    }
  }

  if (num == sum) {
    printf("%d is a perfect number!\n", num);
  } else {
    printf("%d is not a perfect number!\n", num);
  }
}
