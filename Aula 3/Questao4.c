#include <stdio.h>

int main() {
  int A[30], n;

  for (int i = 0; i <= 29; i++) {
    printf("Insira um número inteiro: ");
    scanf("%d", &A[i]);
  }

  printf("Insira o valor de n: ");
  scanf("%d", &n);

  for (int i = 0; i <= 29; i++) {
    if (A[i] == n) {
      printf("O número está na posição %d", i);
    } else {
      printf("O número não está no vetor");
    }
  }

  return 0;
}