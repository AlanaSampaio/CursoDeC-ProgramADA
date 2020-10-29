#include <stdio.h>

int main(){
  float peso;

  printf("Insira o peso do animal: ");
  scanf("%f", &peso);

  if(peso <= 5) {
    printf("Porção diária: 60g");
  } else if (peso >= 6 && peso <= 10) {
    printf("Porção diária: 95g");
  } else if (peso >= 11 && peso <= 15){
    printf("Porção diária: 135g");
  } else if (peso >= 16 && peso <= 20){
    printf("Porção diária: 170g");
  } else {
    printf("Porção diária: 215g");
  }

  return 0;
}