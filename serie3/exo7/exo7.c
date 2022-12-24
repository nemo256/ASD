#include <stdio.h>

#define N 6

int
main() {
  int v1[N] = { -1, 2, 3, 6, 7, 8 };
  int v2[N] = { 0, 1, 2, 4, 5, 7 };
  int v3[N + N], i = 0, j = 0, k = 0;

  while (i < N && j < N && k < N + N) {
    if (v1[i] < v2[j])
      v3[k++] = v1[i++];
    else if (v1[i] > v2[j])
      v3[k++] = v2[j++];
    else {
      v3[k++] = v1[i++];
      v3[k++] = v2[j++];
    }
  }

  // adding leftover values from v1 and v2
  while (i < N)
    v3[k++] = v1[i++];

  while (j < N)
    v3[k++] = v2[j++];

  // removing duplicate values
  int size = N + N;
  for (i = 0; i < size - 1; i++)
    for (j = i + 1; j < size - 1; j++)
      if (v3[i] == v3[j]) {  
        for (k = j; k < size - 1; k++)
          v3[k] = v3[k + 1];  
        size--;  
        j--;      
      }  

  printf("V1 = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", v1[i]);
  printf(" }\n");

  printf("V2 = {");
  for (int i = 0; i < N; i++)
    printf(" %d,", v2[i]);
  printf(" }\n");

  printf("V3 = {");
  for (int i = 0; i < size; i++)
    printf(" %d,", v3[i]);
  printf(" }\n");
}
