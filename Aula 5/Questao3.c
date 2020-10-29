#include <stdio.h>

int soma, diferenca, produto;
void calculando(int num1, int num2){

  soma = num1 + num2;
  diferenca = num1 - num2;
  produto = num1 * num2;
  
}

int main(){
  int a, b;
  printf("Insira dois números: ");
  scanf("%d%d", &a, &b);

  calculando(a, b);
  printf("soma = %d\ndiferença = %d\nproduto = %d", soma, diferenca, produto);
  
  return 0;
}