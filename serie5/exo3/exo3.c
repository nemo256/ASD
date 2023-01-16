#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  // Reverse a word
  char str1[100], str2[100];

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str1);

  // Count the number of vowels
  for (int i = 0, temp; i < strlen(str1); i++) {
    str2[i] = str1[strlen(str1) - i - 1];
  }

  // Display the result
  printf("%s reversed is %s\n", str1, str2);
}
