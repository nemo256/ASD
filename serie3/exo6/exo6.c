#include <stdio.h>

int
main() {
  // Trouver un valeur dans un tableau (Approche dichotomic)
  int N, val, valIndex;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Lire val avec sa position (son indice)
  do {
    printf("Donner Val et sa position: ");
    scanf("%d %d", &val, &valIndex);
  } while(valIndex <= 0 || valIndex >= N);

  // Declaration du tableau
  int T[N], T2[N + 1];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("T[%d]: ", i);
    scanf("%d", &T[i]);
  }

  // Inserer val dans T2
  for (int i = 0, j = 0; i < N; i++, j++) {
    if (i == valIndex) {
      T2[j++] = val;
      T2[j] = T[i];
    } else {
      T2[j] = T[i];
    }
  }

  printf("T = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", T[i]);
  }
  printf(" }\n");

  printf("T2 = {");
  for (int i = 0; i < N + 1; i++) {
    printf(" %d,", T2[i]);
  }
  printf(" }\n");
}
