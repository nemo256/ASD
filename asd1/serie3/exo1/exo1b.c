#include <stdio.h>

int
main() {
  // b.
  float notes[9];
  int tabCoef[9], somme = 0, sommeCoef = 0;

  printf("Entrer les notes avec ses coefficients: \n");
  for (int i = 0; i < 9; i++) {
    printf("Notes[%d]: ", i);
    scanf("%f", &notes[i]);
    printf("Coef[%d]: ", i);
    scanf("%d", &tabCoef[i]);
    somme += notes[i] * tabCoef[i];
    sommeCoef += tabCoef[i];
  }

  printf("La moyenne est: %.2f\n", somme / (float)sommeCoef);
}
