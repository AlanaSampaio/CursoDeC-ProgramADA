#include <stdio.h>

int main() {
  int matriz[10][10], maior = 0, menor;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("Insira um número inteiro para formar uma matriz: ");
      scanf("%d", &matriz[i][j]);

      if (matriz[i][j] < menor) {
        menor = matriz[i][j];
      }
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
      }
    
    }
  }

  printf("%d\n%d\n", menor, maior);

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%5.1d", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}