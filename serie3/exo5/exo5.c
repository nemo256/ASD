#include <stdio.h>
#include <stdlib.h>

#define N 6

int
main() {
  int T[N] = { 1, -4, 2, 5, 2, 11 }, val = -4;

  for (int i = 0; i < N; i++)
    if (T[i] == val) {
      printf("%d exists in T\n", val);
      exit(0);
    }

  printf("%d does not exist in T\n", val);
}
