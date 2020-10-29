#include <stdio.h>

int main () {
  float km;

  printf("Quantos quilômetros deseja percorrer? ");
  scanf("%f", &km);

  float agencia1 = 62 + (1.40 * km);
  float agencia2 = 80 + (1.20 * km);

  printf("A primeira agência cobrará %f e a segunda agência %f", agencia1, agencia2);

  return 0;
}