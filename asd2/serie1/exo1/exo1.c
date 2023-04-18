#include <stdio.h>

int maximum(int x, int y);

int main() {
  int a, b, c;

  printf("Donner 3 nombres: ");
  scanf("%d %d %d", &a, &b, &c);

  int temp = maximum(a, b);
  int resultat = maximum(temp, c);

  printf("Le maximum est: %d\n", resultat);
}

int maximum(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}
