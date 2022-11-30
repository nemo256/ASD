#include <stdio.h>

int main() {
  // Declaration
  float x;

  // Lire x
  printf("Donner x: ");
  scanf("%f", &x);

  // Calculer et afficher le resultat
  printf("7x^3 + 5x^2 + 15 avec x = %f est: %f\n", x,
      7 * (x*x*x) + 5 * (x*x) + 15);
}
