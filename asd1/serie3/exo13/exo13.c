#include <stdio.h>

int
main() {
  // Spliter vect1 et vect2 (min, max)
  int N;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  int vect1[N], vect2[N], vmax[N], vmin[N];

  // Lecture de tableau 1
  printf("Remplir vect1: \n");
  for (int i = 0; i < N; i++) {
    printf("vect1[%d]: ", i);
    scanf("%d", &vect1[i]);
  }

  // Lecture de tableau 2
  printf("Remplir vect2: \n");
  for (int i = 0; i < N; i++) {
    printf("vect2[%d]: ", i);
    scanf("%d", &vect2[i]);
  }

  // Spliter en deux vecteurs (vmax et vmin)
  for (int i = 0; i < N; i++) {
    if (vect1[i] < vect2[i]) {
      vmax[i] = vect2[i];
      vmin[i] = vect1[i];
    } else if (vect1[i] > vect2[i]) {
      vmax[i] = vect1[i];
      vmin[i] = vect2[i];
    } else {
      vmax[i] = vect1[i];
      vmin[i] = vect1[i];
    }
  }

  // Afficher vect1
  printf("Vect1 = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", vect1[i]);
  }
  printf(" }\n");

  // Afficher vect2
  printf("Vect2 = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", vect2[i]);
  }
  printf(" }\n");

  // Afficher vmax
  printf("Vmax = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", vmax[i]);
  }
  printf(" }\n");

  // Afficher vmin
  printf("Vmin = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", vmin[i]);
  }
  printf(" }\n");
}
