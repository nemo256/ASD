#include <stdio.h>
#include <stdbool.h>

#define N 6

int
main() {
  int arr[] = { -1, 2, 3, 5, 9, 11 }, val = -5;
  int newArr[N + 1], i = 0, j = 0;
  bool is_added = false;

  while (i < N) {
    if (arr[i] <= val || (arr[i] > val && is_added)) {
      newArr[j++] = arr[i++];
    } else if (arr[i] > val && !is_added) {
      newArr[j++] = val;
      is_added = true;
    }
  }

  if (!is_added)
    newArr[N] = val;

  printf("newArr = {");
  for (int i = 0; i < N + 1; i++)
    printf(" %d,", newArr[i]);
  printf(" }\n");
}
