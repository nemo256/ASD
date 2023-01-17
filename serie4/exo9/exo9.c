#include <stdio.h>

int
main() {
  // Remove a rectangle from a matrix
  int L, C, starti, startj, height, width;

  // Read matrix dimensions
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Read start position
  printf("Donner le coin superieur gauche (position initial): ");
  scanf("%d %d", &starti, &startj);

  // Read width and height of the rectangle
  printf("Donner l'hauteur et la longueur du rectangle: ");
  scanf("%d %d", &height, &width);

  // Check if indices are out of bounds
  if (starti + height > L || startj + width > C) {
    printf("Out of bounds!\n");
    return 1;
  }

  // Declaration
  int Mat[L][C];

  // Read the matrix
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Replacing the rectangle by zeros
  for (int i = starti; i < starti + height; i++) {
    for (int j = startj; j < startj + width; j++) {
      Mat[i][j] = 0;
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
