#include <stdio.h>
#include <string.h>

// 0.25pts (type de retour)
// 0.25pts (les parametres)
int voyelles(char* str) {
  // 0.25pts (initialisation)
  int compteur = 0;

  // 2.5pts (compteur de voyelles)
  while (*str != '\0') {
    if (*str == 'a' ||
        *str == 'e' ||
        *str == 'i' ||
        *str == 'o' ||
        *str == 'u' ||
        *str == 'y') {
      compteur++;
    }
    str++;
  }

  // 0.25pts (retourne)
  return compteur;
}

// 0.25pts (type de retour)
// 0.25pts (les parametres)
void inverser(char* str) {
  // 2.5pts (inverser une chaine de caractere, il ya d'autre methodes)
  int i = 0;
  int n = strlen(str);
  while (i < n / 2) {
    char temp = *(str + i);
    *(str + i) = *(str + (n - i - 1));
    *(str + (n - i - 1)) = temp;
    i++;
  }
}

int main() {
  // 0.5pts
  char str[100];

  // 0.5pts
  printf("Enter a string: ");
  scanf("%s", str);

  // 0.75pts
  // int x = voyelles(str); (aussi valide)
  printf("Number of vowels: %d\n", voyelles(str));

  // 0.75pts
  inverser(str);
  printf("Reversed string: %s\n", str);
}
