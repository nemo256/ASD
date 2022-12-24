#include <stdio.h>
#include <stdlib.h>

#define N 10

int
main() {
  int vect[] = { 1, 8, 3, 10, 9, 5, 8, 13, 7, 4 };
  int maxGap, maxGap2;

  // Initialization
  maxGap = abs(vect[0] - vect[1]);
  maxGap2 = 0;

  for (int i = 0, tempGap; i < N - 1; i++) {
    tempGap = abs(vect[i] - vect[i + 1]);
    if (maxGap < tempGap) {
      maxGap2 = maxGap;
      maxGap = tempGap;
    } else if (maxGap2 < tempGap && maxGap > tempGap) {
      maxGap2 = tempGap;
    }
  }

  printf("Max gap is: %d\n", maxGap);
  printf("2nd max gap is: %d\n", maxGap2);
}
