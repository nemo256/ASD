#include <stdio.h>

int multiple(int x, int n);

int main() {
  int x;

  printf("Donner un entier: ");
  scanf("%d", &x);

  if (multiple(x, 2)) {
    printf("Il est pair\n");
  }

  if (multiple(x, 3)) {
    printf("Il est multiple de 3\n");
  }

  if (multiple(x, 6)) {
    printf("Il est divisible par 6\n");
  }
}

int multiple(int x, int n) {
  if (x % n == 0) {
    return 1;
  } else {
    return 0;
  }
}
