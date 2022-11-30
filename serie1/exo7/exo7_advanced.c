#include <stdio.h>

/* 
 * This is a bitwise operator Exclusive OR (XOR)
 * For more info, please visit the link below:
 * https://www.tutorialspoint.com/cprogramming/c_operators.htm
*/
#define SWAP(x, y) { x ^= y; y ^= x; x ^= y; }

int main() {
  int x = 4, y = 2;

  printf("Before permutation: x = %d, y = %d\n", x, y);      
  SWAP(x, y);
  printf("After permutation: x = %d, y = %d\n", x, y);    
}
