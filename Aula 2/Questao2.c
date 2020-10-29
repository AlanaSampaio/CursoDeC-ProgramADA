#include <stdio.h>

int main(){
  int placa;

  printf("Insira os 4 dígitos da placa: ");
  scanf("%d", &placa);
  
  int resto1 = placa % 1000;
  int resto2 = resto1 % 100;
  int ultimoDigito = resto2 % 10;
  
  if (ultimoDigito == 1 || ultimoDigito == 2) {
    printf("Não podem trafegar na segunda-feira");
  } else if (ultimoDigito == 3 || ultimoDigito == 4) {
    printf("Não podem trafegar na terça-feira");
  }else if (ultimoDigito == 5 || ultimoDigito == 6) {
    printf("Não podem trafegar na quarta-feira");
  }else if (ultimoDigito == 7 || ultimoDigito == 8) {
    printf("Não podem trafegar na quinta-feira");
  }else if (ultimoDigito == 9 || ultimoDigito == 0){
    printf("Não podem trafegar na sexta-feira");
  }
  
  return 0;
}