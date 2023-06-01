#include <stdio.h>
#include <stdlib.h>

void saisi(int* v, int size) {
  printf("Enter the array elements: ");
  for (int i = 0; i < size; i++)
    scanf("%d", &v[i]);
}

int** sort(int* v, int** Vptr, int size) {
  for (int i = 0; i < size; i++) {
    Vptr[i] = &v[i];
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (*(Vptr[i]) > *(Vptr[j])) {
        int* temp = Vptr[i];
        Vptr[i] = Vptr[j];
        Vptr[j] = temp;
      }
    }
  }
}

int main() {
  int size;

  do {
    printf("Enter the size of the array: ");
    scanf("%d", &size);
  } while(size <= 0 || size > 100);

  int* v = (int*)calloc(size, sizeof(int));
  int** Vptr = (int**)calloc(size, sizeof(int*));

  if (!v || !Vptr) {
    printf("Error: unable to create arrays.\n");
    exit(1);
  }

  saisi(v, size);

  printf("&V[%d] = [", size);
  for (int i = 0; i < size; i++) {
    printf("%p, ", &v[i]);
  }
  printf("]\n");

  printf("V[%d] = [", size);
  for (int i = 0; i < size; i++) {
    printf("%d, ", v[i]);
  }
  printf("]\n");

  sort(v, Vptr, size);

  printf("Vptr[%d] = [", size);
  for (int i = 0; i < size; i++) {
    printf("%p, ", Vptr[i]);
  }
  printf("]\n");

  free(v);
}
