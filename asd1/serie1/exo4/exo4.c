#include <stdio.h>

int main() {
  // Declaration
  int nombre, carre;

  // Lire un nombre
  printf("Donner un nombre: ");
  scanf("%d", &nombre);

  // Calcule de carre
  carre = nombre * nombre;

  // Afficher le resultat
  printf("%d^2 = %d\n", nombre, carre);
}
