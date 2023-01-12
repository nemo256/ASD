#include <stdio.h>
#include <stdlib.h>

int
main() {
  // Trouver le 2eme max difference des elements d'un tableau
  int N;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int vect[N];
  int maxGap, maxGap2;

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("vect[%d]: ", i);
    scanf("%d", &vect[i]);
  }

  // Initialization
  maxGap = abs(vect[0] - vect[1]);
  maxGap2 = 0;

  // Trouver le 2eme maxGap
  for (int i = 0, tempGap; i < N - 1; i++) {
    tempGap = abs(vect[i] - vect[i + 1]);
    if (maxGap < tempGap) {
      maxGap2 = maxGap;
      maxGap = tempGap;
    } else if (maxGap2 < tempGap && maxGap > tempGap) {
      maxGap2 = tempGap;
    }
  }

  // Affichage du resultat
  printf("Max gap is: %d\n", maxGap);
  printf("2nd max gap is: %d\n", maxGap2);
}
