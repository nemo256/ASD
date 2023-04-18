#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  // Count the number of vowels in a given string
  char str[100];
  unsigned int counter = 0;

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str);

  // Count the number of vowels
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'a' ||
        str[i] == 'e' ||
        str[i] == 'i' ||
        str[i] == 'o' ||
        str[i] == 'u' ||
        str[i] == 'y') {
      counter++;
    }
  }

  // Display the result
  printf("%s contains %d vowels!\n", str, counter);
}
