#include <stdio.h>

int
main() {
  // Somme de damier
  int N;

  // Read matrix dimensions
  do {
    printf("Donner la taille du matrice carree: ");
    scanf("%d", &N);
  } while(N <= 0 || N > 9);

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

  /* - - - - - - - - - - - - - */
  /*  Comment the code bellow  */
  /*  To test each approach    */
  /* - - - - - - - - - - - - - */

  // Row by Row
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if ((i + j) % 2 == 0) {
        S += Mat[i][j];
      }
    }
  }

  // Direct diagonal access (first diagonal -> top right)
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      for (int j = 0, k = i; j < N && k < N; j++, k++) {
        S += Mat[j][k];
      }
    }
  }

  // Direct diagonal access (first diagonal -> bottom left)
  for (int i = 2; i < N; i++) { // 2 to not include the first diagonal
    if (i % 2 == 0) {
      for (int j = 0, k = i; j < N && k < N; j++, k++) {
        S += Mat[k][j];
      }
    }
  }

  // Display the result
  printf("Sum = %d\n", S);

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
