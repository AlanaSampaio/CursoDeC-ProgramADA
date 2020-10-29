#include <stdio.h>

int main(){
  int dia;

  printf("Insira a sua idade em dias: ");
  scanf("%i", &dia);

  int ano = dia / 365;
  int multiplicacao = ano * 365;
  int subtracao = dia - multiplicacao;
  int mes = subtracao / 30;
  int dias = subtracao % 30;

  printf("Sua idade é %i anos, %i meses e %i dias.", ano, mes, dias);

  return 0;
}