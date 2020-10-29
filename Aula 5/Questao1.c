#include <stdio.h>

void cesar(float *);

int main(){
  float temperatura;

  printf("Insira a temperatura em Farenheit: ");
  scanf("%f", &temperatura);

  cesar(&temperatura);

  printf("Em celsius a tempertatura é: %.2f", temperatura);

  return 0;

}

void cesar(float *temp){
  float celciu, divisao;
  int menos;
  divisao = 5.0 / 9.0 ;
  menos = *temp - 32;
  celciu = divisao * menos;

  *temp = celciu;

}