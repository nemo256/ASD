#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int matricule;
    char nom[50];
    char prenom[50];
    float moyenne;
} Etudiant;

void creerFichier(char* nomFichier, int N) {
  FILE* fp = fopen(nomFichier, "w");

  Etudiant e;

  for (int i = 0; i < N; i++) {
    printf("Entrer les informations de l'etudiant: %d\n", i + 1);
    printf("Matricule: ");
    scanf("%d", &e.matricule);
    printf("Nom: ");
    scanf("%s", e.nom);
    printf("Prenom: ");
    scanf("%s", e.prenom);
    printf("Moyenne: ");
    scanf("%f", &e.moyenne);

    fprintf(fp, "%d %s %s %.2f\n", e.matricule, e.nom, e.prenom, e.moyenne);
  }

  fclose(fp);
}

void ajouterEtudiant()
{
  FILE* fp = fopen("ETUDIANT.txt", "r");
  FILE* fp2 = fopen("ETUDIANT2.txt", "w");

  if (!fp || !fp2) {
    printf("Erreur d'ouverture des fichiers.\n");
    return;
  }

  // Copy whats in ETUDIANT into ETUDIANT2
  int c;
  while ((c = fgetc(fp)) != EOF) {
    fputc(c, fp2);
  }

  fclose(fp);
  
  Etudiant e;

  printf("Entrer les informations de l'etudiant:\n");
  printf("Matricule: ");
  scanf("%d", &e.matricule);
  printf("Nom: ");
  scanf("%s", e.nom);
  printf("Prenom: ");
  scanf("%s", e.prenom);
  printf("Moyenne: ");
  scanf("%f", &e.moyenne);

  fprintf(fp2, "%d %s %s %.2f\n", e.matricule, e.nom, e.prenom, e.moyenne);
  
  fclose(fp2);
}

void insererEtudiant() {
  FILE* fp = fopen("ETUDIANT.txt", "r");
  FILE* fp2 = fopen("ETUDIANT3.txt", "w");

  if (!fp || !fp2) {
    printf("Erreur d'ouverture des fichiers.\n");
    return;
  }

  Etudiant e, newE;

  printf("Entrer les informations de l'etudiant:\n");
  printf("Matricule: ");
  scanf("%d", &newE.matricule);
  printf("Nom: ");
  scanf("%s", newE.nom);
  printf("Prenom: ");
  scanf("%s", newE.prenom);
  printf("Moyenne: ");
  scanf("%f", &newE.moyenne);

  bool inserted = false;
  while (fscanf(fp, "%d %s %s %f", &e.matricule, e.nom, e.prenom, &e.moyenne) != EOF) {
    if (strcmp(e.nom, newE.nom) > 0 && !inserted) {
      fprintf(fp2, "%d %s %s %.2f\n", newE.matricule, newE.nom, newE.prenom, newE.moyenne);
      inserted = true;
    }
    fprintf(fp2, "%d %s %s %.2f\n", e.matricule, e.nom, e.prenom, e.moyenne);
  }

  if (!inserted) {
    fprintf(fp2, "%d %s %s %.2f\n", newE.matricule, newE.nom, newE.prenom, newE.moyenne);
  }

  fclose(fp);
  fclose(fp2);
}

void supprimerEtudiants() {
  FILE* fp = fopen("ETUDIANT.txt", "r");
  FILE* fp2 = fopen("ETUDIANT4.txt", "w");

  if (!fp || !fp2) {
    printf("Erreur d'ouverture des fichiers.\n");
    return;
  }

  Etudiant e;
  while (fscanf(fp, "%d %s %s %f\n", &e.matricule, e.nom, e.prenom, &e.moyenne) != EOF) {
    if (e.moyenne >= 10.0) {
      fprintf(fp2, "%d %s %s %.2f\n", e.matricule, e.nom, e.prenom, e.moyenne);
    }
  }

  fclose(fp);
  fclose(fp2);
}

int main(void) {
  int N;
  do {
    printf("Combien d'etudiants? ");
    scanf("%d", &N);
  } while(N < 2);

  creerFichier("ETUDIANT.txt", N);
  ajouterEtudiant();
  insererEtudiant();
  supprimerEtudiants();
}
