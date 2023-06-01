#include <stdio.h>

void permuter(int* ptr1, int* ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {
  int x = 10;
  int y = 20;

  int* ptr1 = &x;
  int* ptr2 = &y;

  printf("Avant permutation : x = %d, y = %d\n", x, y);

  permuter(ptr1, ptr2);

  printf("Après permutation : x = %d, y = %d\n", x, y);

  return 0;
}

