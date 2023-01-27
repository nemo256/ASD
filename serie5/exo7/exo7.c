#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {
  // Check if two words are anagram
  char str1[100], str2[100];
  bool anagram = true;

  // Get both strings
  printf("Enter the first string: ");
  scanf("%s", str1);

  printf("Enter the second string: ");
  scanf("%s", str2);

  // Stop if str1 and str2 don't have the same length
  if (strlen(str1) != strlen(str2)) {
    printf("Not anagram!\n");
    return 0;
  }

  // Check if all characters in str1 exist in str2
  for (int i = 0; i < strlen(str1); i++) {
    for (int j = 0; j < strlen(str2); j++) {
      if (str1[i] == str2[j]) {
        break;
      } else if (str1[i] != str2[j] && j == strlen(str2) - 1) {
        anagram = false;
      }
    }
  }

  // Display the result
  if (anagram) {
    printf("%s and %s are anagram.\n", str1, str2);
  } else {
    printf("%s and %s are not anagram.\n", str1, str2);
  }
  return 0;
}
