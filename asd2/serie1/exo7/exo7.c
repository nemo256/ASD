#include <stdio.h>

int LongChaine(char *str);
int len(char *str);

int main() {
  char str[50];

  printf("Donner une chaine: ");
  scanf("%s", str);

  printf("La longueur de '%s' est: %d!\n", str, LongChaine(str));
  printf("Len de '%s' est: %d!\n", str, len(str));
}

int LongChaine(char *str) {
  int i = 0;

  while (str[i] != '\0') i++;

  return i;
}

int len(char *str) {
  if (*str == '\0')
    return 0;
  return 1 + len(str + 1);
}
