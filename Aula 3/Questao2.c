#include <stdio.h>

int main() {
  int vetor[10], cont = 0, i = 0, menor = vetor[0];

  for (i = 1; i <= 30; i++) {
    printf("Insira um número inteiro: ");
    scanf("%d", &vetor[i]);

    if(vetor[i] < menor) {
      menor = vetor[i];
    } 
    if (vetor[i] % 3 == 0) {
      cont++;
    }
    
  }

   printf("O menor numero do vetor ");
    printf("%d\n\n", menor);

    printf("A quantidade de elementos divisiveis pelo %d é: %d\n\n", menor, cont);

  return 0;
}