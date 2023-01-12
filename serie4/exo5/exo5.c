#include <stdio.h>

int
main() {
  // Remove first diagonal elements
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

  /* - - - - - - - - - - - - - */
  /*  Comment the code bellow  */
  /*  To test each approach    */
  /* - - - - - - - - - - - - - */

  // Line by line
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        Mat[i][j] = 0;
      }
    }
  }

  // Direct first diagonal access
  for (int i = 0; i < N; i++) {
    Mat[i][i] = 0;
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
