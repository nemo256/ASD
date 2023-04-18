#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main() {
  // Trouver un valeur dans un tableau (Approche dichotomic)
  int N, val;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner la taille du tableau N et Val: ");
    scanf("%d %d", &N, &val);
  } while(N <= 0);

  // Declaration du tableau
  int T[N];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("T[%d]: ", i);
    scanf("%d", &T[i]);
  }
  
  // Declaration
  int i = N / 2;
  bool flag1 = false, flag2 = false;

  // Recherche de val dans T
  while (i < N && i > -1) {
    if (flag1 && flag2) {
      printf("%d does not exist in T\n", val);
      exit(0);
    } else if (val < T[i]) {
      i--;
      flag1 = true;
    } else if (val > T[i]) {
      i++;
      flag2 = true;
    } else {
      printf("%d exists in T\n", val);
      exit(0);
    }
  }

  // Affichage de resultat
  printf("%d does not exist in T\n", val);
}
