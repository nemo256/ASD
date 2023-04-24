#include <stdio.h>

typedef struct etudiant {
  int id;
  char nom[20];
  char prenom[20];
  int age;
  float moyenne;
} etudiant;

void saisi(etudiant *e) {
  printf("\tID: ");
  scanf("%i", &e->id);
  printf("\tNom: ");
  scanf("%s", &e->nom);
  printf("\tPrenom: ");
  scanf("%s", &e->prenom);
  printf("\tAge: ");
  scanf("%i", &e->age);
  printf("\tMoyenne: ");
  scanf("%f", &e->moyenne);
}

void affiche(etudiant *e) {
  printf("Etudiant: \n");
  printf("\tID: %i\n", e->id);
  printf("\tNom: %s\n", e->nom);
  printf("\tPrenom: %s\n", e->prenom);
  printf("\tAge: %i\n", e->age);
  printf("\tMoyenne: %f\n", e->moyenne);

  if (e->moyenne < 10) {
    printf("%s %s est Ajournee\n", e->nom, e->prenom);
  } else {
    printf("%s %s est Admis\n", e->nom, e->prenom);
  }
}

int main() {
  int N;
  do {
    printf("Combien d'etudiant? "); 
    scanf("%i", &N);
  } while(N > 100);

  etudiant e[N];

  for (int i = 0; i < N; i++) {
    printf("Etudiant %i: \n", i + 1);
    saisi(&e[i]);
  }

  for (int i = 0; i < N; i++) {
    printf("Etudiant %i: \n", i + 1);
    affiche(&e[i]);
  }

  float moyenneGenerale = 0.0;
  for (int i = 0; i < N; i++) {
    moyenneGenerale += e[i].moyenne;
  }

  printf("La moyenne generale est: %f\n", moyenneGenerale / N);
}
