#include <stdio.h>
#include <math.h>

int
main() {
  float result = 1;
  int factorial, N;

  // Read N
  do {
    printf("Enter N: ");
    scanf("%d", &N);
  } while(N <= 0 || N > 10);

  // Calculate the series
  for (int i = 1; i <= N; ++i) {
    factorial = 1;
    for (int j = 1; j <= i; ++j) {
      factorial *= j;
    }
    result += (float)pow(-1, i) / ((float)(2 * i + 1) * factorial);
  }

  printf("Result = %f\n", result);
}
