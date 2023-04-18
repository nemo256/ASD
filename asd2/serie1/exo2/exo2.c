#include <stdio.h>
#include <stdbool.h>

bool divise(int a, int b);

int main() {
  int N;

  do {
    printf("Donner N: ");
    scanf("%d", &N);
  } while(N > 10 || N <= 0);

  int tab[N], val;

  printf("Donner val: ");
  scanf("%d", &val);

  printf("Remplir tab:\n");
  for (int i = 0; i < N; i++) {
    printf("tab[%d] = ", i);
    scanf("%d", &tab[i]);
  }

  printf("Les elements divisible par %d: ", val);
  for (int i = 0; i < N; i++) {
    if (divise(tab[i], val) == true) {
      printf("%d, ", tab[i]);
    }
  }
  printf("\n");
}

bool divise(int a, int b) {
  if (a % b == 0) {
    return true;
  } else {
    return false;
  }
}
