#include <stdio.h>

int
main() {
  // Rook movement
  int N = 8, rook = 3;
  int posi, posj, movi, movj;

  // Lire la position de tour
  do {
    printf("Donner la position de tour: ");
    scanf("%d %d", &posi, &posj);
  } while(posi < 0 || posj < 0 || posi >= 8 || posj >= 8);

  printf("Donner la position de movement suivant: ");
  scanf("%d %d", &movi, &movj);

  // Declaration
  int Mat[N][N];

  // Initialize matrix elements
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      Mat[i][j] = 0;
    }
  }

  // Initialize rook position
  Mat[posi][posj] = rook;

  // Check if movement is accessible
  if (posi + movi >= 8 || posj + movj >= 8) {
    printf("Out of bounds!\n");
    return 1;
  }

  // Check if movement is possible
  if (movi == posi && movj != posj) {
    Mat[posi][movj] = 1;
  } else if (movi != posi && movj == posj) {
    Mat[movi][posj] = 1;
  } else {
    printf("Impossible move\n");
  }

  // Printing the matrix
  printf("Mat = {\n");
  for (int i = 0; i < N; i++) {
    printf(" {", i);
    for (int j = 0; j < N; j++) {
      printf(" %d,", Mat[i][j]);
    }
    printf(" },\n");
  }
  printf("}\n");
}
