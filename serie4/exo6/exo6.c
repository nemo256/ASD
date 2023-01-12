#include <stdio.h>

int
main() {
  // Check if matrix is symetric or not
  int N;

  // Read matrix dimensions
  do {
    printf("Donner la taille du matrice carree: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int Mat[N][N];

  // Read matrix elements
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Check if matrix is not asymetric
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (Mat[i][j] != Mat[j][i]) {
        printf("Matrix is not symetric!\n");
        return 1;
      }
    }
  }

  // Display the result
  printf("Matrix is symetric!\n");

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
