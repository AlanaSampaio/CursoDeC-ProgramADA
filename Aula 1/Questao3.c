#include <stdio.h>

int main(){
  float valor;
  int desconto;

  printf("Insira o valor do produto: ");
  scanf("%f", &valor);

  printf("Insira o desconto do produto: ");
  scanf("%i", &desconto);

  float desconto1 = (valor * desconto) / 100;
  float subtracao = valor - desconto1;

  printf("O valor com desconto é %.2f", subtracao);

  return 0;
}