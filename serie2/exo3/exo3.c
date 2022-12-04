#include <stdio.h>

// Defining N as the number 4
#define N 4

int
main() {
  // Initializing sum to 0
  int sum = 0;

  // Adding 1 + 2 + ... till N
  for (int i = 1; i <= N; ++i)
    sum += i;

  printf("Sum of %d numbers is: %d\n", N, sum);
}
