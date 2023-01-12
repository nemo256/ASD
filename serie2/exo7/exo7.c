#include <stdio.h>

int
main() {
  // Declaration
  int min, number, N;

  // Read N
  do {
    printf("Enter N: ");
    scanf("%d", &N);
  } while(N <= 0 || N > 10);

  // Finding the minimum of N numbers
  printf("Enter %d numbers: \n", N);
  for (int i = 0; i < N; ++i) {
    printf("%d:\t", i + 1);
    scanf("%d", &number);
    if (number < min || i == 0)
      min = number;
  }

  // Display the result
  printf("Min is: %d\n", min);
}
