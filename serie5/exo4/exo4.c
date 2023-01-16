#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (int argc, char *argv[]) {
  // Check is substring exists in a string
  char str[100], substr[100];
  bool found;

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str);

  // Get the substring
  printf("Enter the substring: ");
  scanf("%s", substr);

  // Check if substring exists in the original string
  for (int i = 0; str[i] != '\0'; i++) {
    found = false;
    for (int j = 0, k = i; substr[j] != '\0'; j++, k++) {
      if (str[k] == substr[j] && j == strlen(substr) - 1) {
        found = true;
      } else if (str[k] == substr[j]) {
        continue;
      } else {
        break;
      }
    }
    if (found) {
      break;
    }
  }

  // Display the result
  if (found) {
    printf("%s is a part of %s\n", substr, str);
  } else {
    printf("%s does not exist in %s.\n", substr, str);
  }
}
