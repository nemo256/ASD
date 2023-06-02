#include <stdio.h>

// 0.25pts (type de retour)
// 0.25pts (les parametres)
void saisi(int* T, int N) {
  // 2pts (remplissage de T)
  printf("Remplir T:\n");
  for (int i = 0; i < N; i++) {
    printf("T[%d]: ", i);
    scanf("%d", &T[i]);
  }
}

// 0.25pts (type de retour)
// 0.25pts (les parametres)
void majoritaire(int* T, int N) {
  // 3pts (le nombre majoritaire)
  for (int i = 0, counter; i < N; i++) {
    counter = 0;
    for (int j = 0; j < N; j++) {
      if (T[i] == T[j]) {
        counter++;
      }
    }

    if (counter > N / 2) {
      printf("%d est le nombre majoritaire!\n", T[i]);
      return;
    }
  }

  // 0.25pts s'il n'y a pas de nombre majoritaire
  printf("Il n'y a pas de nombre majoritaire!\n");
}

// 0.25pts (type de retour)
// 0.25pts (les parametres)
void afficher(int* T, int N) {
  // 1pts (Affichage de T)
  printf("T[%d] = {", N);
  for (int i = 0; i < N; i++) {
    printf("%d, ", T[i]);
  }
  printf("}\n", N);
}

int main() {
  // 0.5pts
  int N;
  do {
    printf("Donner N: ");
    scanf("%d", &N);
  } while(N < 10);
  int T[N];

  // 0.75pts (0.25pts pour chaque appel de fonction)
  saisi(T, N);
  majoritaire(T, N);
  afficher(T, N);
}
