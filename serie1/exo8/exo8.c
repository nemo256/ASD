#include <stdio.h>

int main() {    
  // Declaration
  int a = 5, b = 2, c = 6;
  int temp;

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
