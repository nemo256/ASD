#include <stdio.h>

int main() {    
  // Declaration
  int a, b, temp;

  // 1er methode
  printf("Using temp: \n");      
  a = 1;
  b = 2;
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  temp = a;
  a = b;
  b = temp;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    

  // 2eme methode
  printf("Using addition and substraction: \n");      
  a = 9;
  b = 5;
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    

  // 3eme methode
  printf("Using multiplication and division: \n");      
  a = 13;
  b = 6;
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  a = a * b;
  b = a / b;
  a = a / b;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    
}
