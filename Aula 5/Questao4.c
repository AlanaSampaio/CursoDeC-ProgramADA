#include <stdio.h>

int vetor[100], soma = 0, media = 0;
void vetore(int vetor[100]){
  for (int i = 0; i <= 99; i++) {
    soma += i * vetor[i];
  }
  media = soma / 100;
  
}

int main(){
 
  for (int i = 0; i <= 99; i++) {
    printf("Digite um número inteiro: ");
    scanf("%d", &vetor[i]);
  }
  vetore(vetor);

  printf("A média é: %d", media);

  return 0;
}