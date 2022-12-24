#include <stdio.h>

#define N 6

int
main() {
  int arr[] = { -1, 2, 9, 10, 2, 2 }, nombre_occurence;

  for (int i = 0; i < N; i++) {
    nombre_occurence = 0;
    for (int j = 0; j < N; j++)
      if (arr[i] == arr[j])
        nombre_occurence++;
    printf("Nombre d'occurence de %d est: %d\n", arr[i], nombre_occurence);
  }
}
