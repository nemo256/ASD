#include <stdio.h>

int main() {
  // Declaration
  int x, y, z;

  // Lire x et y
  printf("Donner x, y et z: ");
  scanf("%d %d %d", &x, &y, &z);

  // Trouver les minimum
  // 1er methode
  if (x < y) {
    if (x < z) {
      printf("1er methode - Le minimum est: %d\n", x);
    } else {
      printf("1er methode - Le minimum est: %d\n", z);
    }
  } else {
    if (y < z) {
      printf("1er methode - Le minimum est: %d\n", y);
    } else {
      printf("1er methode - Le minimum est: %d\n", z);
    }
  }

  // 2eme methode
  printf("2eme methode - Le minimum est: %d\n",
      x < y ? (x < z ? x : z) : (y < z ? y : z));
}
