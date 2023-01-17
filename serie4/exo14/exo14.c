#include <stdio.h>

int
main() {
  // Swap two columns of a given matrix
  int L, C, C1, C2;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Lire les 2 lignes pour permuter
  do {
    printf("Donner les 2 colonnes pour permuter: ");
    scanf("%d %d", &C1, &C2);
  } while(C1 < 0 || C1 >= C || C2 < 0 || C2 >= C);

  // Declaration
  int Mat[L][C];

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < C; i++) {
    for (int j = 0; j < L; j++) {
      printf("Mat[%d][%d]: ", i, j);
      if (i == C1) {
        scanf("%d", &Mat[j][C2]);
      } else if (i == C2) {
        scanf("%d", &Mat[j][C1]);
      } else {
        scanf("%d", &Mat[j][i]);
      }
    }
  }

  // Printing the matrix
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
