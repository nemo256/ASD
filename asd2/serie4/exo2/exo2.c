#include <stdio.h>
#include <stdlib.h>

int somme(int *T, int taille) {
  int somme = 0;
  int *ptr = T;

  while (ptr < T + taille) {
    somme += *ptr;
    ptr++;
  }

  return somme;
}

int main() {
  int taille;
  do {
    printf("Entrez la taille du T : ");
    scanf("%d", &taille);
  } while(taille <= 0);

  // Allocation dynamique pour le tableau T
  int *T = (int *)malloc(taille * sizeof(int));

  if (T == NULL) {
    printf("Erreur d'allocation de memoire\n");
    return 1;
  }

  printf("Entrez les elements du T :\n");
  for (int i = 0; i < taille; i++) {
    scanf("%d", &T[i]);
  }

  int resultat = somme(T, taille);

  printf("La somme des elements du T est : %d\n", resultat);

  // Liberation de la memoire
  free(T);

  return 0;
}
