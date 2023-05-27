#include <stdio.h>

void sort(int *T, int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (T[i] > T[j]) {
        temp = T[i];
        T[i] = T[j];
        T[j] = temp;
      }
    }
  }
}

int main() {
  int T[100];
  int size = 0;
  FILE *fp;
  int i;

  // Open the file for reading
  fp = fopen("file.txt", "r");
  if (fp == NULL) {
    printf("Unable to open the file.\n");
    return 1;
  }

  // Read values from the file
  for (i = 0; fscanf(fp, "%d", &T[i]) != EOF; i++, size++);
  fclose(fp);

  // Sort the array using bubble sort
  sort(T, size);

  // Open the file for writing
  fp = fopen("file.txt", "w");
  if (fp == NULL) {
    printf("Unable to open the file.\n");
    return 1;
  }

  // Write the sorted values to the file
  for (i = 0; i < size; i++) {
    fprintf(fp, "%d\n", T[i]);
  }
  fclose(fp);

  printf("The values have been sorted and saved back to the file.\n");

  return 0;
}
