// (6 pts)
#include <stdio.h>

int
main() {
  float X;                      // Declaration (1pts)

  printf("Donner R: ");
  scanf("%f", &X);              // Lecture de X (2pts = 1pts "%f" et 1pts &X)

  X = X * X * X;                // Calcule (2pts)

  printf("X^3 = %f\n", X);      // Affichage de resultat (1pts)
}
