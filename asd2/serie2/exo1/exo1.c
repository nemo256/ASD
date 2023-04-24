#include <stdio.h>

typedef struct complex {
  float real;
  float imaginary;
} complex;

void saisi(complex *x) {
  scanf("%f %f", &x->real, &x->imaginary);
}

void affiche(complex *x) {
  printf("%.1f + %.1fi\n", x->real, x->imaginary);
}

complex addition(complex x, complex y) {
  complex temp;
  temp.real      = x.real + y.real;
  temp.imaginary = x.imaginary + y.imaginary;
  return (temp);
}

complex produit(complex x, complex y) {
  complex temp;
  temp.real      = (x.real * y.real) - (x.imaginary * y.imaginary);
  temp.imaginary = (x.real * y.imaginary) + (x.imaginary * y.real);
  return (temp);
}

int main() {
  complex x, y, sum, product;

  printf("Entrer X (r, i): ");
  saisi(&x);
  printf("Entrer Y (r, i): ");
  saisi(&y);

  sum = addition(x, y);
  product = produit(x, y);

  printf("Sum = ");
  affiche(&sum);
  printf("Product = ");
  affiche(&product);
}
