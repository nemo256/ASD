#include <stdio.h>

#define N 6

int
main() {
  int vect[N] = { -1, 6, 3, -5, -2, 0 }, Npos = 0, Nneg = 0;

  for (int i = 0; i < N; i++) {
    if (vect[i] < 0)
      Nneg++;
    else if (vect[i] > 0)
      Npos++;
    else
      continue;
  }

  int vectPos[Npos], vectNeg[Nneg];

  for (int i = 0, j = 0, k = 0; i < N; i++) {
    if (vect[i] < 0)
      vectNeg[j++] = vect[i];
    else if (vect[i] > 0)
      vectPos[k++] = vect[i];
    else
      continue;
  }

  printf("VectPos = {");
  for (int i = 0; i < Npos; i++)
    printf(" %d,", vectPos[i]);
  printf(" }\n");

  printf("VectNeg = {");
  for (int i = 0; i < Nneg; i++)
    printf(" %d,", vectNeg[i]);
  printf(" }\n");
}
