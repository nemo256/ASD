// (9 pts)
#include <stdio.h>

int
main() {
  int age;                            // Declaration (1pts)

  printf("Entrer votre age: ");
  scanf("%d", &age);                  // Lecture de nombre (2pts = 1pts "%d" et 1pts &age)

  if (age <= 10)                      // Condition (1pts)
    printf("Vous etes un enfant.\n"); // Affichage (1pts)
  else if (age >= 11 && age <= 20)    // Condition (1pts)
    printf("Vous etes un jeune.\n");  // Affichage (1pts)
  else                                // Condition (1pts)
    printf("Vous etes un adulte.\n"); // Affichage (1pts)
}
