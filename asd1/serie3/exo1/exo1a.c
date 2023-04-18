#include <stdio.h>

int
main() {
  // a.
  float notes[9];
  int somme = 0;

  printf("Entrer les notes: \n");
  for (int i = 0; i < 9; i++) {
    printf("Notes[%d]: ", i + 1);
    scanf("%f", &notes[i]);
    somme += notes[i];
  }

  printf("La moyenne est: %.2f\n", somme / 9);
}
