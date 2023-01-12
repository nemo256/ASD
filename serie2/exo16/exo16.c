#include <stdio.h>

int
main() {
  // Declaration
  int a, b;
  
  // Read two numbers
  do {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  } while(a == 0 || b == 0);

  // Easy method
  printf("Using (/) operator: \n");
  printf("A / B = %d\n", a / b);

  // Low level (Basic method)
  printf("Without using (/) operator: \n");
  int number_of_divisors = 0;
  while (a >= b) {
    a -= b;
    number_of_divisors++;
  }

  // Display the result
  printf("A / B = %d\n", number_of_divisors);
}
