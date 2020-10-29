#include <stdio.h>

int main() {
  float peso;
  float altura;

  printf("Insira o seu peso: ");
  scanf("%f", &peso);

  printf("insira sua altura: ");
  scanf("%f", &altura);

  float potencia = altura*altura;
  float imc = peso/potencia;

  printf("Seu IMC é: %f", imc);
  
  return 0;
}