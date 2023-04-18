#include <stdio.h>

int vabs(int x);

int main() {
  int N;

  do {
    printf("Donner N: ");
    scanf("%d", &N);
  } while(N > 10 || N <= 0);

  int T[N], max, somme = 0;

  printf("Remplir T:\n");
  for (int i = 0; i < N; i++) {
    printf("T[%d] = ", i);
    scanf("%d", &T[i]);
    if (i == 0 || max < T[i]) {
      max = T[i];
    }
  }

  for (int i = 0; i < N; i++) {
    if (T[i] != max) {
      somme += vabs(T[i]);
    }
  }

  printf("Max: %d\n", max);
  printf("Somme des valeurs absolue: %d\n", somme);
}

int vabs(int x) {
  if (x < 0) {
    return -x;
  } else {
    return x;
  }
}
