#include <stdio.h>

int main(){
  int idade;
  float altura;
  int idioma;

  printf("Insira a sua idade: ");
  scanf("%d", &idade);
  printf("Insira a sua altura (em metros): ");
  scanf("%f", &altura);
  printf("Insira o número de idiomas que fala com fluência: ");
  scanf("%d", &idioma);
  
 if (idade >= 24 && altura >= 1.70 && idioma >= 2){
   printf("Atende aos requisitos da companhia aérea");
   } else {
     printf("Não atende aos requisitos da companhia aérea");
   }
  
  return 0;
}