#include <stdio.h>

int
main() {
  // Min de N nombres
  int N;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int Tab[N], min = Tab[0];

  // Trouver le minimum dans le tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("Tab[%d]: ", i);
    scanf("%d", &Tab[i]);
    if (min > Tab[i]) {
      min = Tab[i];
    }
  }

  // Display the result
  printf("Min: %d\n", min);
}
