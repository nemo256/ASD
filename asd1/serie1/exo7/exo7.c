#include <stdio.h>

int main() {    
  // Declaration
  int a, b, temp;

  // Lire deux nombres
  printf("Donner deux nombres: ");
  scanf("%d %d", &a, &b);

  // 1er methode
  printf("Using temp: \n");      
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  temp = a;
  a = b;
  b = temp;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    

  // 2eme methode
  printf("Using addition and substraction: \n");      
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    

  // 3eme methode
  printf("Using multiplication and division: \n");      
  printf("Before permutation: a = %d, b = %d\n", a, b);      
  a = a * b;
  b = a / b;
  a = a / b;
  printf("After permutation: a = %d, b = %d\n\n", a, b);    
}
