#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char *argv[]) {
  // Check if a word is palindrome
  char str[100];
  bool palindrome = true;

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str);
  
  // Save length of str
  int N = strlen(str);

  // Check if str is palindrome
  for (int i = 0; i < N / 2; i++) {
    if (str[i] != str[N - i - 1]) {
      palindrome = false;
    }
  }

  // Display the result
  if (palindrome) {
    printf("%s is palindrome.\n", str);
  } else {
    printf("%s is not palindrome.\n", str);
  }
}
