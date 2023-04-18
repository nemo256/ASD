#include <stdio.h>

int
main() {
  // Inverser un tableau (3 methodes)
  int N, temp;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int Tab[N], TabInv[N], Tab1[N], Tab2[N], Tab3[N];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("Tab[%d]: ", i);
    scanf("%d", &Tab[i]);
    Tab1[i] = Tab[i];
    Tab2[i] = Tab[i];
    Tab3[i] = Tab[i];
  }

  // 1er methode utilisant deux tableaux
  for (int i = 0; i < N; i++) {
    TabInv[i] = Tab[N - i - 1];
  }

  // Affichage du tableau
  printf("Tab Originale: {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", Tab[i]);
  }
  printf(" }\n");

  // Affichage du tableau
  printf("1: Tab Inverser: {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", TabInv[i]);
  }
  printf(" }\n");

  // 2eme methode utilisant un seul tableau avec 2 indices
  for (int i = 0, j = N - 1; i < N / 2; i++, j--) {
    temp = Tab1[i];
    Tab1[i] = Tab1[j];
    Tab1[j] = temp;
  }

  // Affichage du tableau
  printf("2: Tab Inverser: {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", Tab1[i]);
  }
  printf(" }\n");

  // 3eme methode utilisant un seul tableau avec un seul indice
  for (int i = 0; i < N / 2; i++) {
    temp = Tab2[i];
    Tab2[i] = Tab2[N - i - 1];
    Tab2[N - i - 1] = temp;
  }

  // Affichage du tableau
  printf("3: Tab Inverser: {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", Tab2[i]);
  }
  printf(" }\n");
}
