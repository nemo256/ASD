#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 6

int
main() {
  int T[N] = { -4, 1, 2, 2, 5, 11 }, val = -3;
  int i = N / 2;
  bool flag1 = false, flag2 = false;

  while (i < N && i > -1) {
    if (flag1 && flag2) {
      printf("%d does not exist in T\n", val);
      exit(0);
    } else if (val < T[i]) {
      i--;
      flag1 = true;
    } else if (val > T[i]) {
      i++;
      flag2 = true;
    } else {
      printf("%d exists in T\n", val);
      exit(0);
    }
  }

  printf("%d does not exist in T\n", val);
}
