#include <stdio.h>

int main() {
  // Declaration
  float x;

  // Lire x
  printf("Donner x: ");
  scanf("%f", &x);

  // Obtenir la valeur absolue
  if (x < 0)
    x = -x;

  // Affichage de resultat
  printf("|x| = %f\n", x);
}
