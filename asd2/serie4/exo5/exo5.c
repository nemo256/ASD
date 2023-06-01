#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr1, *ptr2, *ptr3;

  // Allocation dynamique
  ptr1 = (int *)malloc(sizeof(int));
  ptr2 = (int *)malloc(sizeof(int));
  ptr3 = (int *)malloc(sizeof(int));

  // Verification
  if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
    printf("Erreur d'allocation de memoire.\n");
    return 1;
  }

  printf("Saisissez la valeur pour ptr1 : ");
  scanf("%d", ptr1);

  printf("Saisissez la valeur pour ptr2 : ");
  scanf("%d", ptr2);

  *ptr3 = *ptr1 + *ptr2;

  printf("La somme des deux valeurs est : %d\n", *ptr3);

  // Liberer la memoire allouee
  free(ptr1);
  free(ptr2);
  free(ptr3);
}
