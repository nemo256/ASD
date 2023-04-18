#include <stdio.h>

int
main() {
  // Calculer la somme et produit d'une matrice
  int L, C;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Declaration et initialization
  int Mat[L][C];
  int sum = 0, product = 1;

  // Calculer la somme et produit des elements de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d");
      sum += Mat[i][j];
      product *= Mat[i][j];
    }
  }

  // Affichage du resultat
  printf("Sum = %d\n", sum);
  printf("Product = %d\n", product);

  // Affichage du matrice
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
