#include <stdio.h>

int main() {    
  // Declaration
  int a, b, c;
  int temp;

  // Lire trois nombres
  printf("Donner trois nombres: ");
  scanf("%d %d %d", &a, &b, &c);

  // Affichage avant permutation
  printf("Avant: a = %d, b = %d, c = %d\n", a, b, c);

  // Permutation
  temp = a;
  a = c;
  c = b;
  b = temp;

  // Affichage apres permutation
  printf("Apres: a = %d, b = %d, c = %d\n", a, b, c);
}   
