#include <stdio.h>

int main() {
  // Declaration
  int x, y, z;

  // Lire x et y
  printf("Donner x, y et z: ");
  scanf("%d %d %d", &x, &y, &z);

  // Trouver les minimum
  printf("Le minimum est: %d\n",
      x < y ? (x < z ? x : z) : (y < z ? y : z));
}
