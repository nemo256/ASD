#include <stdio.h>

typedef struct date {
  int jour, mois, annee;
} date;

typedef struct adresse {
  int numero;
  char rue[50];
  char ville[20];
  char wilaya[20];
} adresse;

typedef struct enseignant {
  char nom[20], prenom[20];
  date date_naiss;
  adresse residence;
  char grade[10];
  int annee_de_recrutement;
} enseignant;

void saisi(enseignant *T, int N) {
  for (int i = 0; i < N; i++) {
    printf("Enseignant %i: \n", i + 1);
    printf("\tNom: ");
    scanf("%s", T[i].nom);
    printf("\tPrenom: ");
    scanf("%s", T[i].prenom);
    
    // date
    printf("\tDate de naissance (Jour/Mois/Annee): ");
    scanf("%2d/%2d/%4d", &T[i].date_naiss.jour, &T[i].date_naiss.mois, &T[i].date_naiss.annee);
    
    // residence
    printf("\tResidence: \n");
    printf("\t\tNumero: ");
    scanf("%i", &T[i].residence.numero);
    printf("\t\tRue: ");
    scanf("%s", T[i].residence.rue);
    printf("\t\tVille: ");
    scanf("%s", T[i].residence.ville);
    printf("\t\tWilaya: ");
    scanf("%s", T[i].residence.wilaya);

    printf("\tGrade: ");
    scanf("%s", T[i].grade);
    printf("\tAnnee de recrutement: ");
    scanf("%i", &T[i].annee_de_recrutement);
  }
}

void recherche_par_date(enseignant *T, int N, date input_date) {
  for (int i = 0; i < N; i++) {
    if (T[i].date_naiss.annee <= input_date.annee &&
        T[i].date_naiss.mois  <= input_date.mois &&
        T[i].date_naiss.jour  <= input_date.jour) {
      printf("Enseignant %i: %s %s reside dans %s / %s.\n", i + 1, T[i].nom, T[i].prenom, T[i].residence.ville, T[i].residence.wilaya);
    }
  }
}

void recherche_par_adresse(enseignant *T, int N, adresse input_adresse) {
  for (int i = 0; i < N; i++) {
    if (T[i].residence.ville == input_adresse.ville &&
        T[i].residence.wilaya == input_adresse.wilaya) {
      printf("Enseignant %i: %s %s.\n", i + 1, T[i].nom, T[i].prenom);
    }
  }
}

int recherche_nbr_enseignant(enseignant *T, int N, int annee) {
  int counter = 0;

  for (int i = 0; i < N; i++) {
    if (T[i].annee_de_recrutement == annee) {
      counter++;
    }
  }

  return counter;
}

int main()
{
  int N;
  do {
    printf("Combien d'enseignant? ");
    scanf("%i", &N);
  } while(N >= 100);
  enseignant T[N];

  saisi(T, N);

  date input_date;
  printf("Donnee une date (Jour/Mois/Annee): ");
  scanf("%2d/%2d/%4d", &input_date.jour, &input_date.mois, &input_date.annee);

  printf("Enseignant nee avant (%i/%i/%i): \n", input_date.jour, input_date.mois, input_date.annee);
  recherche_par_date(T, N, input_date);

  adresse input_adresse;
  printf("Donnee la ville: ");
  scanf("%s", &input_adresse.ville);
  printf("Donnee la wilaya: ");
  scanf("%s", &input_adresse.wilaya);
  printf("Enseignant résidant à '%s / %s': \n", input_adresse.ville, input_adresse.wilaya);
  recherche_par_adresse(T, N, input_adresse);

  int annee;
  printf("Donnee une annee de recrutement: ");
  scanf("%i", &annee);
  int nbr_enseignant = recherche_nbr_enseignant(T, N, annee);

  printf("Nombre d'enseignants dans l'annee %i est: %i.\n", annee, nbr_enseignant);
}
