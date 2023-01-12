#include <stdio.h>
#include <stdbool.h>

int
main() {
  // Inserer un element dans un tableau
  int N, val, i = 0, j = 0;

  // Lire la taille du tableau et un valeur
  do {
    printf("Donner la taille du tableau N et Val: ");
    scanf("%d %d", &N, &val);
  } while(N <= 0);

  // Declaration
  int arr[N], newArr[N + 1];
  bool is_added = false;

  // Lecture de tableau
  printf("Remplir le tableau: \n");
  for (int i = 0; i < N; i++) {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  // Inserer val dans le nouveau tableau (newArr)
  while (i < N) {
    if (arr[i] <= val || (arr[i] > val && is_added)) {
      newArr[j++] = arr[i++];
    } else if (arr[i] > val && !is_added) {
      newArr[j++] = val;
      is_added = true;
    }
  }

  // Si val > [tout les elements du tableau] ?
  if (!is_added) {
    newArr[N] = val;
  }

  // Affichage du resultat
  printf("newArr = {");
  for (int i = 0; i < N + 1; i++) {
    printf(" %d,", newArr[i]);
  }
  printf(" }\n");
}
