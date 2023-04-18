#include <stdio.h>

int main () {
  // Declaration (1pts)
  int N, num, moyPair, moyImpair, pair, impair;

  // Initialisation (1pts)
  moyPair = 0;
  moyImpair = 0;
  pair = 0;
  impair = 0;

  // Le cas ou N >= 5 (1pts)
  // Syntaxe do {} while(); (0.25pts)
  do {
    printf("Donner N: ");
    scanf("%d", &N); // (%d 0.25pts, &N 0.25pts)
  } while(N < 5); // (0.25pts)

  // Lecture et Calcule (3pts)
  for (int i = 0; i < N; i++) { // (0.5pts)
    printf("Donner un nombre: ");
    scanf("%d", &num); // (%d 0.25pts, &num 0.25pts)
    if (num % 2 == 0) { // (0.5pts)
      moyPair += num; // (0.5pts)
      pair++; // (0.5pts)
    } else { // (0.5pts)
      moyImpair += num; // (0.5pts)
      impair++; // (0.5pts)
    }
  }

  // Calcule des moyenne (1pts)
  moyPair = moyPair / pair; // (0.5pts)
  moyImpair = moyImpair / impair; // (0.5pts)

  // Affichage de resultat (1pts)
  if (moyPair == moyImpair) { // (0.25pts)
    printf("La moyenne est: %d\n", moyPair); // (0.25pts)
  } else { // (0.25pts)
    printf("Erreur!\n"); // (0.25pts)
  }
}
