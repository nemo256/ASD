#include <stdio.h>

int
main() {
  // Sum of two matrices
  int L1, C1, L2, C2;

  // Lecture des taille (ligne, colon) de premier matrice
  printf("Enter Rows and Columns of the first matrix: ");
  scanf("%d %d", &L1, &C1);

  // Lecture des taille (ligne, colon) de deuxieme matrice
  printf("Enter Rows and Columns of the second matrix: ");
  scanf("%d %d", &L2, &C2);

  // Tester la condition de multiplication de deux matrices
  if ((L1 != L2) || (C1 != C2)) {
    printf("Impossible.\n");
    return 1;
  }

  // Declaration des matrices
  int Mat1[L1][C1];
  int Mat2[L2][C2];
  int Sum[L1][C2];

  // Lecture de premier matrice
  printf("Enter the first Matrix: \n");
  for (int i = 0; i < L1; i++) {
    for (int j = 0; j < C1; j++) {
      printf("Mat1[%d][%d]: ", i, j);
      scanf("%d", &Mat1[i][j]);
    }
  }

  // Lecture de deuxieme matrice
  printf("Enter the second Matrix: \n");
  for (int i = 0; i < L2; i++) {
    for (int j = 0; j < C2; j++) {
      printf("Mat2[%d][%d]: ", i, j);
      scanf("%d", &Mat2[i][j]);
    }
  }

  // Sum of two matrices
  for (int i = 0; i < L1; i++) {   // L1 == L2 && C1 == C2
    for (int j = 0; j < C2; j++) {
      Sum[i][j] = Mat1[i][j] + Mat2[i][j];
    }
  }

  // Printing the first matrix
  printf("Mat1 = {\n");
  for (int i = 0; i < L1; i++) {
    printf(" {", i);
    for (int j = 0; j < C1; j++) {
      printf(" %d,", Mat1[i][j]);
    }
    printf(" },\n");
  }
  printf("}\n");

  // Printing the second matrix
  printf("Mat2 = {\n");
  for (int i = 0; i < L2; i++) {
    printf(" {", i);
    for (int j = 0; j < C2; j++) {
      printf(" %d,", Mat2[i][j]);
    }
    printf(" },\n");
  }
  printf("}\n");

  // Printing the sum
  printf("Sum = {\n");
  for (int i = 0; i < L1; i++) {
    printf(" {", i);
    for (int j = 0; j < C2; j++) {
      printf(" %d,", Sum[i][j]);
    }
    printf(" },\n");
  }
  printf("}\n");
}
