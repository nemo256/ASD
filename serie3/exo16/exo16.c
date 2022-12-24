#include <stdio.h>

#define N 10
#define K 3         // Tranche d'ordre k (3)

int
main() {
  int vect[] = { -20, 8, -11, 10, -9, -15, 8, 13, -7, 4 };
  int tranche[K] = { 0, 0, 0 };
  int min = vect[0] + vect[1];
  
  for (int i = 0, sum; i < N - K; i++) {
    sum = 0;
    for (int j = i, it; j < i + K; j++) {
      sum += vect[j];
      if (min > sum) {
        for (it = 0; it < K; it++)    // it est l'indice de tableau tranche
          tranche[it] = 0;
        min = sum;
        it = j;
        while (it >= i) {
          tranche[it - i] = vect[it];
          it--;
        }
        continue;
      }
    }
  }

  printf("Min: %d\n", min);
  printf("Tranche = {");
  for (int i = 0; i < K; i++)
    printf(" %d,", tranche[i]);
  printf(" }\n");
}
