// (6 pts)
#include <stdio.h>

int
main() {
  float R, S;                   // Declaration (1pts)

  printf("Donner R: ");
  scanf("%f", &R);              // Lecture de R (2pts = 1pts "%f" et 1pts &R)

  S = R * R * 3.14;             // Calcule (2pts)

  printf("S = %f\n", S);        // Affichage de resultat (1pts)
}
