#include <stdio.h>


int
main() {
  // Trouver le nombre d'occurence de val dans chaque colonne du matrice
  int L, C, val;

  // Lire les dimensions du matrice
  do {
    printf("Donner la taille des lignes et colonnes: ");
    scanf("%d %d", &L, &C);
  } while(L <= 0 || C <= 0);

  // Lire un valeur
  printf("Donner un valeur: ");
  scanf("%d", &val);

  // Declaration
  int Mat[L][C];

  // Lecture de la matrice
  printf("Remplissez la matrice: \n");
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      printf("Mat[%d][%d]: ", i, j);
      scanf("%d", &Mat[i][j]);
    }
  }

  // Trouver le nombre d'occurence de val dans la matrice
  for (int i = 0, counter; i < C; i++) {
    counter = 0;
    for (int j = 0; j < L; j++) {
      if (val == Mat[j][i]) {
        counter++;
      }
    }
    printf("%d occured %d time(s) in column %d.\n", val, counter, i + 1);
  }
  
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
