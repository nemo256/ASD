#include <stdio.h>

int
main() {
  // Nombre d'occurence de chaque element du tableau
  int N, nombre_occurence;

  // Lire la taille du tableau
  do {
    printf("Donner la taille du tableau: ");
    scanf("%d", &N);
  } while(N <= 0);

  // Declaration du tableau
  int arr[N];

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < N; i++) {
    nombre_occurence = 0;
    for (int j = 0; j < N; j++) {
      if (arr[i] == arr[j]) {
        nombre_occurence++;
      }
    }
    printf("Nombre d'occurence de %d est: %d\n", arr[i], nombre_occurence);
  }
}
