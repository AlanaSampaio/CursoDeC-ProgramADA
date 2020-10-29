#include <stdio.h>

int main(){
  int numero;
  int cont;

  printf("Insira um número: ");
  scanf("%d", &numero);
  
  for (cont = 1; cont <= 10; cont++){
    int calculo = cont * numero;

    printf("%d X %d = %d\n", cont, numero, calculo);
  }

  return 0;

}