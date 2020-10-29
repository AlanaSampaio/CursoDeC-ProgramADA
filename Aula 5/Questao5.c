#include <stdio.h>

int matriz[3][3], y , produto = 0;
void vetore(int matriz[3][3], int num){
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++){
      produto = matriz[i][j] * num;

      matriz[i][j] = produto;
    }
  }
  
}

int main(){
 printf("Insira o valor de y: ");
 scanf("%d", &y);

  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++){
      printf("Digite um número inteiro: ");
      scanf("%d", &matriz[i][j]);
    }
  }

  vetore(matriz, y);

   for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 2; j++){
      printf("\n%d\n", matriz[i][j]);
    }
   }

  return 0;
}