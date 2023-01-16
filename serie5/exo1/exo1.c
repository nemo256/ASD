#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (int argc, char *argv[]) {
  // Find if a character exists in a given string
  char str[100], character;
  bool found = false;

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str);

  // Get the character to search for
  printf("Enter the character: ");
  scanf(" %c", &character);

  // Find the given character in the string
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == character) {
      found = true;
    }
  }

  // Display the result
  if (found) {
    printf("Character '%c' exists in the string %s.\n", character, str);
  } else {
    printf("Character not found.\n");
  }
}
