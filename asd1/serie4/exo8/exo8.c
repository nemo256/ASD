#include <stdio.h>

int
main() {
  // Convert a matrix into an array
  int L, C;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Declaration
  int Mat[L][C], arr[L * C];

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Convert the matrix Mat into an array arr
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      arr[i * C + j] = Mat[i][j];
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

  // Printing the resulting array
  printf("Array = {\n");
  for (int i = 0; i < L * C; i++) {
    printf("  arr[%d] is found in Mat[%d][%d] = %d,\n", i, i / C, i % C, arr[i]);
  }
  printf("}\n");
}
