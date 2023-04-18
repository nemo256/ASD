#include <stdio.h>

int
main() {
  // Swap two rows of a given matrix
  int L, C, L1, L2;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Lire les 2 lignes pour permuter
  do {
    printf("Donner les 2 lignes pour permuter: ");
    scanf("%d %d", &L1, &L2);
  } while(L1 < 0 || L1 >= L || L2 < 0 || L2 >= L);

  // Declaration
  int Mat[L][C];

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      if (i == L1) {
        scanf("%d", &Mat[L2][j]);
      } else if (i == L2) {
        scanf("%d", &Mat[L1][j]);
      } else {
        scanf("%d", &Mat[i][j]);
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
