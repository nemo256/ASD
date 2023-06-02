#include <stdio.h>

// 0.25pts (type de retour)
// 0.25pts (les parametres)
int replaceSpaces(char* str) {
  // 1.5pts
  if (*str == '\0') {
    return 0;
  }

  // 1.5pts
  if (*str == ' ') {
    *str = '.';
    return 1 + replaceSpaces(str + 1);
  }

  // 0.5pts
  return replaceSpaces(str + 1);
}

int main() {
  // 0.5pts
  char str[100];

  // 0.5pts
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  // gets(str) / scanf("%s", str) (aussi valide)

  // 0.5pts
  printf("Number of spaces: %d\n", replaceSpaces(str));
  // 0.5pts
  printf("New string: %s\n", str);
}
