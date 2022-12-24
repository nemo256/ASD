#include <stdio.h>

#define N 10
#define K 3         // Tranche d'ordre k (3)

int
main() {
  int vect[] = { -20, 8, -11, 10, -9, -12, 8, 13, -7, 4 };
  int min = vect[0] + vect[1];
  
  for (int i = 0, sum; i < N - K; i++) {
    sum = 0;
    for (int j = i; j < i + K; j++) {
      sum += vect[j];
      if (min > sum) {
        min = sum;
        continue;
      }
    }
  }

  printf("Min: %d\n", min);
}
