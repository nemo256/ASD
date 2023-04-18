#include <stdio.h>

int
main() {
  // Spliter vect (vectPos et vectNeg)
  int N, Npos = 0, Nneg = 0;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration
  int vect[N];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("Vect[%d]: ", i);
    scanf("%d", &vect[i]);
  }

  // Obtenir les tailles de vectPos et vectNeg
  for (int i = 0; i < N; i++) {
    if (vect[i] < 0) {
      Nneg++;
    } else if (vect[i] > 0) {
      Npos++;
    } else {
      continue;
    }
  }

  // Declaration de vectPos et vectNeg
  int vectPos[Npos], vectNeg[Nneg];

  // Remplissage de vectPos et vectNeg
  for (int i = 0, j = 0, k = 0; i < N; i++) {
    if (vect[i] < 0) {
      vectNeg[j++] = vect[i];
    } else if (vect[i] > 0) {
      vectPos[k++] = vect[i];
    } else {
      continue;
    }
  }

  // Affichage de resultat
  printf("VectPos = {");
  for (int i = 0; i < Npos; i++) {
    printf(" %d,", vectPos[i]);
  }
  printf(" }\n");

  printf("VectNeg = {");
  for (int i = 0; i < Nneg; i++) {
    printf(" %d,", vectNeg[i]);
  }
  printf(" }\n");
}
