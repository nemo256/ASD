#include <stdio.h>

int
main() {
  // Trouver le maximum avec ces indices
  int L, C;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Declaration
  int Mat[L][C];

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Initialization
  int max = Mat[0][0];
  int maxi = 0, maxj = 0;

  // Trouver le maximum avec ces indices
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (max < Mat[i][j]) {
        max = Mat[i][j];
        maxi = i;
        maxj = j;
      }
    }
  }

  // Affichage du resultat
  printf("Max = %d (%d, %d)\n", max, maxi, maxj);

  // Affichage du matrice
  printf("Mat = {\n");
  for (int i = 0; i < L; i++) {
    printf(" {", i);
    for (int j = 0; j < C; j++) {
      printf(" %d,", Mat[i][j]);
    }
    printf(" },\n");
  }
  printf("}\n");
}
