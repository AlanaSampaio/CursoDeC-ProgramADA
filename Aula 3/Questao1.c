#include <stdio.h>

int main() {
  int vetorA[10], vetorB[10], vetorC[10], soma = 0, i = 0, numero;

  for (i = 1; i <= 10; i++) {
    printf("Digite um número inteiro para o vetor A: ");
    scanf("%d", &vetorA[i]);

    printf("Digite um número inteiro para o vetor B: ");
    scanf("%d", &vetorB[i]);

    soma = vetorA[i] + vetorB[i];
    vetorC[i] = soma;
  }

  for (i = 1; i <= 10; i++) {
    printf("%d", vetorC[i]);
  }

  return 0;
}