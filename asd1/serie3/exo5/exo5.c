#include <stdio.h>
#include <stdlib.h>

int
main() {
  // Trouver un valeur dans un tableau (Approche normale)
  int N, val;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner la taille du tableau N et Val: ");
    scanf("%d %d", &N, &val);
  } while(N <= 0);

  // Declaration
  int T[N];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("T[%d]: ", i);
    scanf("%d", &T[i]);
  }

  // Trouver val dans le tableau T
  for (int i = 0; i < N; i++) {
    if (T[i] == val) {
      printf("%d exists in T\n", val);
      exit(0);
    }
  }

  // Affichage de resultat
  printf("%d does not exist in T\n", val);
}
