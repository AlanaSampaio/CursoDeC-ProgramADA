#include <stdio.h>

int main() {

  float peso;

  printf("Insira o peso da criança: ");
  scanf("%f", &peso);

  int calculo = (peso / 2) * 5;

  printf("A quantidade de gotas que a criança deve ingerir é: %i", calculo);

  return 0;
}