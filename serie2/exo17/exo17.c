#include <stdio.h>

int
main() {
  int num = 6, sum = 0;

  for (int i = 1; i <= num / 2; ++i)
    if (num % i == 0)
      sum += i;

  if (num == sum)
    printf("%d is a perfect number!\n", num);
  else
    printf("%d is not a perfect number!\n", num);
}
