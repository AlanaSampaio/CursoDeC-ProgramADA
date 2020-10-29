#include <stdio.h>
#include <string.h>

int main() {
  int n;

  printf("Insira a quantidade de caracteres do nome que irá inserir: ");
  scanf("%d", &n);

  char nome[n];
  
  printf("Digite o nome: ");
  fgets(nome, n, stdin);

  printf("%s", nome);
  

  return 0;
}