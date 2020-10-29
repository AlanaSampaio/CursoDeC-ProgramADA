#include <stdio.h>

int main() {
  int vetorV[200], vetorA[100], vetorB[100];

  for (int i = 1; i <= 200; i++) {
    printf("Insira um número inteiro: ");
    scanf("%d", &vetorV[i]);

    if(vetorV[i] % 2 == 0) {
      vetorA[i] = vetorV[i];
    } else {
      vetorB[i] = vetorV[i];
    }
  }

  return 0;
}