#include <stdio.h>

int main(){
  float salario;
  float prestacao;

  printf("Insira o seu salário: ");
  scanf("%f", &salario);
  printf("Insira o valor da prestação: ");
  scanf("%f", &prestacao);

  float porcentagem = (salario * 30) / 100;

  printf("%f e %f", porcentagem, prestacao);

  if (prestacao <= porcentagem) {
    printf("O empréstimo pode ser concedido");
  } else {
    printf("O empréstimo não pode ser concedido");
  }

  return 0;

}