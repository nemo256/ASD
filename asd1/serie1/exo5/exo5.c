#include <stdio.h>

int main() {
  // Declaration
  int x, y;

  // Lire deux nombres
  printf("Donner deux nombres: ");
  scanf("%d %d", &x, &y);

  // Calcule et affichage au meme temps
  printf("%d + %d = %d\n", x, y, x + y);
  printf("%d - %d = %d\n", x, y, x - y);
  printf("%d * %d = %d\n", x, y, x * y);
}
