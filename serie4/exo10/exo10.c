#include <stdio.h>

int
main() {
  // Count positive values
  int L, C;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Declaration
  int Mat[L][C];
  int counter = 0;

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Count positive values
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      if (Mat[i][j] >= 0) {
        counter++;
      } else {
        Mat[i][j] = -1 * Mat[i][j];
      }
    }
  }

  // Display the result
  printf("Positive values = %d\n", counter);

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
