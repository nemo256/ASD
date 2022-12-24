#include <stdio.h>

#define N 6

int
main() {
  int vect1[] = { -1, 2, 3, 1, 0, 4 };
  int vect2[] = { 1, 2, -3, 7, 1, 5 };
  int vmax[N], vmin[N];

  for (int i = 0; i < N; i++)
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

  printf("Vect1 = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", vect1[i]);
  printf(" }\n");

  printf("Vect2 = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", vect2[i]);
  printf(" }\n");

  printf("Vmax = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", vmax[i]);
  printf(" }\n");

  printf("Vmin = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", vmin[i]);
  printf(" }\n");
}
