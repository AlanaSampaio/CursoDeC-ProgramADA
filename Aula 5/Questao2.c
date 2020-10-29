#include <stdio.h>

int condicao(int num1, int num2){
  if (num1 % num2 == 0){
    return 1;
  }else {
    return 0;
  }
}

int main(){
  int a, b;

  printf("Insira o primeiro número: ");
  scanf("%d", &a);
  printf("Insira o segundo número: ");
  scanf("%d", &b);

  if (condicao(a, b) == 1) {
    printf("O primeiro número é divisível pelo segundo, sendo VERDADEIRO");
  } else if (condicao(a, b) == 0){
    printf("O primeiro número não é divisível pelo segundo, sendo FALSO");
  }

  return 0;
}