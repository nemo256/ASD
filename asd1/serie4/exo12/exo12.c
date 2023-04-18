#include <stdio.h>

int
main() {
  // Sum of the first diagonal
  int N;

  // Read matrix dimensions
  do {
    printf("Donner la taille du matrice carree: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int Mat[N][N], S = 0;

  // Read matrix elements
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Direct access to the first diagonal
  for (int i = 0; i < N; i++) {
    S += Mat[i][i];
  }

  // Display the result
  printf("Sum of the first diagonal = %d\n", S);

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
