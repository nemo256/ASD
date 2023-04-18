#include <stdio.h>

int fact(int a);
int fact_recu(int a);
int puiss(int a, int n);

int main() {
  int x, n;
  float S = 0.0;

  printf("Donner x et n: ");
  scanf("%d %d", &x, &n);

  for (int i = 1; i <= n; i++)
    S += puiss(x, i) / (float)(fact_recu(i));

  printf("S = %f\n", S);
  printf("Factoriel recursive = %d\n", fact_recu(x));
}

int fact_recu(int a) {
  if (a == 0 || a == 1) {
    return 1;
  }
  return a * fact_recu(a - 1);
}

int fact(int a) {
  int result = a;

  while (a > 1)
    result *= --a;

  return result;
}

int puiss(int a, int n) {
  int result = a;

  while (n > 1) {
    result *= a;
    n--;
  }

  return result;
}
