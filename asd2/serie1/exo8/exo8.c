#include <stdio.h>

int somme(int n);

int main() {
  int n;

  do {
    printf("Donner un entier positive: ");
    scanf("%d", &n);
  } while(n <= 0);

  printf("Somme de %d premier nombre: %d\n", n, somme(n));
}

int somme(int n) {
  if (n == 0) {
    return 0;
  }
  return n + somme(n - 1);
}
