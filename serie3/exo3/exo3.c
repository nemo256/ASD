#include <stdio.h>

#define N 7

int
main() {
  // Inverser le tableau
  // 1er methode utilisant deux tableaux
  int Tab1[N] = {1, 9, -4, -5, 3, 2, 7}, TabInv[N], temp;

  for (int i = 0; i < N; i++)
    TabInv[i] = Tab1[N - i - 1];

  printf("1: Tab Inverser: {");
  for (int i = 0; i < N; i++)
    printf(" %d,", TabInv[i]);
  printf(" }\n");

  // 2eme methode utilisant un seul tableau avec 2 indices
  int Tab2[N] = {1, 9, -4, -5, 3, 2, 7};
  for (int i = 0, j = N - 1; i < N / 2; i++, j--) {
    temp = Tab2[i];
    Tab2[i] = Tab2[j];
    Tab2[j] = temp;
  }

  printf("2: Tab Inverser: {");
  for (int i = 0; i < N; i++)
    printf(" %d,", Tab2[i]);
  printf(" }\n");

  // 3eme methode utilisant un seul tableau avec un seul indice
  int Tab3[N] = {1, 9, -4, -5, 3, 2, 7};
  for (int i = 0; i < N / 2; i++) {
    temp = Tab3[i];
    Tab3[i] = Tab3[N - i - 1];
    Tab3[N - i - 1] = temp;
  }

  printf("3: Tab Inverser: {");
  for (int i = 0; i < N; i++)
    printf(" %d,", Tab3[i]);
  printf(" }\n");
}
