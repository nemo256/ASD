#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  // Delete a substring
  char str[100], newstr[100];
  unsigned int p;

  // Get the string
  printf("Enter the string: ");
  scanf("%s", str);

  // Get the position
  printf("Enter the position: ");
  scanf("%d", &p);

  // Copy str to newstr
  for (int i = 0; i < p; i++) {
    newstr[i] = str[i];
  }

  // Mark the end of the new string
  newstr[p] = '\0';

  // Display the result
  printf("New string: %s\n", newstr);
}
