// (9 pts)
#include <stdio.h>

int
main() {
  int nombre;                   // Declaration (1pts)

  printf("Donner un nombre: ");
  scanf("%d", &nombre);         // Lecture de nombre (2pts = 1pts "%d" et 1pts &nombre)

  if (nombre < 0)               // Condition (1pts)
    printf("Negative\n");       // Affichage (1pts)
  else if (nombre > 0)          // Condition (1pts)
    printf("Positive\n");       // Affichage (1pts)
  else                          // Condition (1pts)
    printf("Zero\n");           // Affichage (1pts)
}
