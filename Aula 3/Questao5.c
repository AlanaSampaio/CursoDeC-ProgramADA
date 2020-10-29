#include <stdio.h>

int main() {
  int matriz[4][4], matriz2[4][4], numero, produto;

    printf("Digite um número para o produto: ");
  scanf("%d", &numero);

  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) {
      printf("Insira um número inteiro para formar uma matriz: ");
      scanf("%d", &matriz[i][j]);

      produto = numero * matriz[i][j];
      matriz2[i][j] = produto;
    }
  }

  for (int i = 1; i < 4; i++) {
    for (int j = 1; j < 4; j++) { 
      printf("%5.1d", matriz2[i][j]);
    }
    printf("\n");
  }