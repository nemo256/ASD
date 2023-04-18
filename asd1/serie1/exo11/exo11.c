#include <stdio.h>

int main() {
  // Declaration
  int x, y;

  // Lire x et y
  printf("Donner x et y: ");
  scanf("%d %d", &x, &y);

  // Determiner le minimum
  if (x < y)
    printf("Le minimum est: %d\n", x);
  else
    printf("Le minimum est: %d\n", y);
}
