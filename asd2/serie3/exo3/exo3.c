#include <stdio.h>

void enregistrer_valeurs() {
  FILE *fp;
  int valeur;

  fp = fopen("valeurs.txt", "w");

  if (fp == NULL) {
    printf("Erreur lors de l'ouverture du fp.\n");
    return;
  }

  printf("Entrez des valeurs entières positives (0 pour arrêter) :\n");

  while (1) {
    scanf("%d", &valeur);

    if (valeur < 0) {
      printf("La valeur doit être positive.\n");
    } else if (valeur == 0) {
      break;
    } else {
      fprintf(fp, "%d\n", valeur);
    }
  }

  fclose(fp);
  printf("Les valeurs ont été enregistrées dans le fp 'valeurs.txt'.\n");
}

void retrouver_valeur(int rang) {
  FILE *fp;
  int valeur;
  int i = 1;

  fp = fopen("valeurs.txt", "r");

  if (fp == NULL) {
    printf("Erreur lors de l'ouverture du fp.\n");
    return;
  }

  while (fscanf(fp, "%d", &valeur) != EOF) {
    if (i == rang) {
      printf("La valeur de rang %d est : %d\n", rang, valeur);
      fclose(fp);
      return;
    }
    i++;
  }

  fclose(fp);
  printf("Le rang demandé dépasse la taille du fp.\n");
}

int main() {
  int rang;

  enregistrer_valeurs();

  printf("Entrez le rang de la valeur à retrouver : ");
  scanf("%d", &rang);

  retrouver_valeur(rang);

  return 0;
}
