#include <stdio.h>
#include <stdlib.h>

typedef struct temps {
  int heure, minute, seconde;
} temps;

int transform(temps t) {
  return ((t.heure * 60) + t.minute) * 60 + t.seconde;
}

temps decompos(int seconde) {
  temps t;
  t.seconde = seconde % 60;
  t.minute  = (seconde / 60) % 60;
  t.heure   = ((seconde / 60) / 60) % 60;
  return t;
}

int main() {
  temps t, t1, t2;
  printf("Donner T1 (HH:MM:SS): ");
  scanf("%i:%i:%i", &t1.heure, &t1.minute, &t1.seconde);
  printf("Donner T2 (HH:MM:SS): ");
  scanf("%i:%i:%i", &t2.heure, &t2.minute, &t2.seconde);

  t = decompos(abs(transform(t1) - transform(t2)));
  printf("T diff = %i:%i:%i\n", t.heure, t.minute, t.seconde);
}
