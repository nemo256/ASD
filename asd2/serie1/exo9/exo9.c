#include <stdio.h>
#include <string.h>

void mirror(char *c);
void mirror2(char *str, int start, int end);

int main() {
  char str[50];

  printf("Donner une chaine: ");
  scanf("%s", str);

  printf("Miroir de '%s' est: ", str);
  mirror(str);
  mirror2(str, 0, strlen(str));
  printf("\n");
}

void mirror(char *c) {
  if (*c != '\0') {
    mirror(c + 1);
  }
  printf("%c", *c);
}

void mirror2(char *str, int start, int end) {
  if (start < end) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    mirror2(str, start + 1, end - 1);
  }
}
