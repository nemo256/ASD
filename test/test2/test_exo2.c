#include <stdio.h>

int main () {
  // Declaration (0.5pts)
  int N, val, occurence;

  // Initialisation (0.5pts)
  occurence = 0;

  // Le cas ou N >= 5 (1pts)
  // Syntaxe do {} while(); (0.25pts)
  do {
    printf("Donner N: ");
    scanf("%d", &N); // (%d 0.25pts, &N 0.25 pts)
  } while(N < 5); // (0.25pts)

  // Lecture d'une valeur (0.5pts)
  printf("Donner une valeur: ");
  scanf("%d", &val); // (%d 0.25pts, &val 0.25pts)
  
  int T[N];

  // Lecture du tableau (1.5pts)
  for (int i = 0; i < N; i++) { // (0.75pts)
    printf("Donner T[%d]: ", i);
    scanf("%d", &T[i]); // (%d 0.5pts, &T[i] 0.5pts)
  }

  // Nombre d'apparition de val dans T (1.5pts)
  for (int i = 0; i < N; i++) { // (0.75pts)
    if (T[i] == val) { // (0.5pts)
      occurence++; // (0.5pts)
    }
  }

  // Supprimer les doublants (3pts)
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N - 1; j++) {
      if (T[i] == T[j]) {
        for (int k = j; k < N - 1; k++) {
          T[k] = T[k + 1];
        }
        N--;
        j--;
      }  
    }
  }

  // Affichage de nombre d'occurence (0.5pts)
  printf("Nombre d'occurence de %d dans T est: %d foix\n", val, occurence);

  // Affichage du T (1pts)
  printf("T = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", T[i]);
  }
  printf(" }\n");
}
