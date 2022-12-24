#include <stdio.h>

#define N 6

int
main() {
  int T[N] = { 1, 0, 2, -4, 9, 13 }, T2[N + 1], val = 3, valIndex = 2;

  for (int i = 0, j = 0; i < N; i++, j++) {
    if (i == valIndex) {
      T2[j++] = val;
      T2[j] = T[i];
    }
    else
      T2[j] = T[i];
  }

  printf("T = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", T[i]);
  printf(" }\n");

  printf("T1 = {");
  for (int i = 0; i < N + 1; i++)
    printf(" %d,", T2[i]);
  printf(" }\n");
}
