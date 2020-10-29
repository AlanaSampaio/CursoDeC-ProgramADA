#include <stdio.h>

int main(){
  int idade;
  float peso;

  printf("Insira a sua idade: ");
  scanf("%d", &idade);
  printf("Insira o seu peso: ");
  scanf("%f", &peso);
  
 if (idade >= 18 && idade <= 65){
   if (peso >= 50){
     printf("Pode doar sangue!");
   } else if (peso < 50){
   printf("Não pode doar sangue!");
   }
 } else {
   printf("Não pode doar sangue!");
 }
  
  return 0;
}