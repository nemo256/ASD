#include <stdio.h>

int
main() {
  // Trouver la somme minimum des elements d'ordre K dans un tableau
  int N, K;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner la taille du tableau N et l'ordre K: ");
    scanf("%d %d", &N, &K);
  } while(N <= 0 || N <= 20 || K <= 0 || K > N);

  // Declaration
  int vect[N], tranche[K];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("vect[%d]: ", i);
    scanf("%d", &vect[i]);
  }

  // Initialization
  int min = vect[0] + vect[1];
  
  // Trouver la somme minimum et sauvegarder la tranche
  for (int i = 0, sum; i < N - K; i++) {
    sum = 0;
    for (int j = i, it; j < i + K; j++) {
      sum += vect[j];
      if (min > sum) {
        for (it = 0; it < K; it++) {
          tranche[it] = 0;
        }
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

  // Affichage du resultat
  printf("Min: %d\n", min);
  printf("Tranche = {");
  for (int i = 0; i < K; i++) {
    printf(" %d,", tranche[i]);
  }
  printf(" }\n");
}
