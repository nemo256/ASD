#include <stdio.h>

#define N 7

int
main() {
  // Min de N nombres
  int Tab[] = {1, 9, -4, -5, 3, 2, 7}, min = Tab[0];

  for (int i = 0; i < N; i++)
    if (min > Tab[i])
      min = Tab[i];

  printf("Min: %d\n", min);
}
