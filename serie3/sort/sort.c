#include <stdio.h>

#define N 6

int 
main() {
  int arr[] = { -1, 9, 2, 3, 5, 8 };

  for (int i = 0, temp; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      if (arr[j] < arr[i]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted array = {");
  for (int i = 0; i < N; i++) {
    printf(" %d,", arr[i]);
  }
  printf(" }\n");
}
