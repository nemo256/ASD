#include <stdio.h>

// 0.25pts (type de retour)
// 0.25pts (les parametres)
int fibonacci(int N) {
  // 1pts
  if (N == 0) {
    return 0;
  }

  // 1pts
  if (N == 1) {
    return 1;
  }

  // 1.5pts
  return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
  // 0.5pts
  int N;

  // 0.5pts
  printf("Enter a number: ");
  scanf("%d", &N);

  // 1pts (0.5pts pour l'affichage et 0.5pts pour l'appel de fonction)
  printf("Fibonacci(%d): %d\n", N, fibonacci(N));
}
