#include <stdio.h>

int
main() {
  // Fusionner deux tableau
  int N, M, i = 0, j = 0, k = 0;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner les tailles pour V1 et V2: ");
    scanf("%d %d", &N, &M);
  } while(N <= 0 || M <= 0);

  // Declaration des tableaux
  int v1[N], v2[M], v3[N + M];

  // Lecture de deux tableaux
  printf("Remplir V1: \n");
  for (int i = 0; i < N; i++) {
    printf("V1[%d]: ", i);
    scanf("%d", &v1[i]);
  }

  printf("Remplir V2: \n");
  for (int i = 0; i < M; i++) {
    printf("V2[%d]: ", i);
    scanf("%d", &v2[i]);
  }

  // Fusionnement
  while (i < N && j < N && k < N + N) {
    if (v1[i] < v2[j]) {
      v3[k++] = v1[i++];
    } else if (v1[i] > v2[j]) {
      v3[k++] = v2[j++];
    } else {
      v3[k++] = v1[i++];
      v3[k++] = v2[j++];
    }
  }

  // Ajouter les valeurs restantes de V1
  while (i < N) {
    v3[k++] = v1[i++];
  }

  // Ajouter les valeurs restantes de V2
  while (j < M) {
    v3[k++] = v2[j++];
  }

  // Supprimer les duplicats
  int size = N + M;
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size - 1; j++) {
      if (v3[i] == v3[j]) {
        for (k = j; k < size - 1; k++) {
          v3[k] = v3[k + 1];
        }
        size--;
        j--;
      }  
    }
  }

  // Affichage de V1
  printf("V1 = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", v1[i]);
  }
  printf(" }\n");

  // Affichage de V2
  printf("V2 = {");
  for (int i = 0; i < M; i++) {
    printf(" %d,", v2[i]);
  }
  printf(" }\n");

  // Affichage de V3
  printf("V3 = {");
  for (int i = 0; i < size; i++) {
    printf(" %d,", v3[i]);
  }
  printf(" }\n");
}
