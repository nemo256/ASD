#include <stdio.h>

#define N 5

int
main() {
  int min, number;

  // Finding the minimum of N numbers
  printf("Enter %d numbers: \n", N);
  for (int i = 0; i < N; ++i) {
    printf("%d:\t", i + 1);
    scanf("%d", &number);
    if (number < min || i == 0)
      min = number;
  }

  printf("Min is: %d\n", min);
}
