#include <stdio.h>
#include <string.h>

void palindrome(char *mot);

int main() {
  char mot[50];

  printf("Donner un mot: ");
  scanf("%s", mot);

  palindrome(mot);
}

void palindrome(char *mot) {
  int start = 0;
  int end = strlen(mot) - 1;

  while (start < end) {
    if (mot[start] != mot[end]) {
      printf("Le mot '%s' n'est pas palindrome!\n", mot);
      return;
    }
    start++;
    end--;
  }

  printf("Le mot '%s' est palindrome!\n", mot);
}
