#include <stdio.h>

int main(){
  int cont;
  int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;

  for (cont = 1; cont <= 2000; cont++) {
    printf("Insira o código correspondente ao seu dandidato: ");
    scanf("%d", &voto);

    switch (voto) {
      case 1: candidato1++;
      break;
      case 2: candidato2++;
      break;
      case 3: candidato3++;
      break;
      case 4: candidato4++;
      break;
      case 5: branco++;
      break;
      default: nulo++;
      break;
    }

  }

  int porcenCand1 = (candidato1 * 100) / 2000;
  int porcenCand2 = (candidato2 * 100) / 2000;
  int porcenCand3 = (candidato3 * 100) / 2000;
  int porcenCand4 = (candidato4 * 100) / 2000;
  int porcenBranco = (branco * 100) / 2000;
  int porcenNulo = (nulo * 100) / 2000;

  if (porcenCand1 > porcenCand2 && porcenCand1 > porcenCand3 && porcenCand1 > porcenCand4 && porcenCand1 > porcenBranco && porcenCand1 > porcenNulo ) {
    printf("O candidado com mais votos é o candidato 1 com porcentagem de %d", porcenCand1);
  } else if (porcenCand2 > porcenCand1 && porcenCand2 > porcenCand3 && porcenCand2 > porcenCand4 && porcenCand2 > porcenBranco && porcenCand2 > porcenNulo) {
    printf("O candidato com mais votos é o candidato 2 com porcentagem de %d", porcenCand2);
  } else if (porcenCand3 > porcenCand1 && porcenCand3 > porcenCand2 && porcenCand3 > porcenCand4 && porcenCand3 > porcenBranco && porcenCand3 > porcenNulo) {
    printf("O candidato com mais votos é o candidato 3 com porcentagem de %d", porcenCand3);
  } else if (porcenCand4 > porcenCand1 && porcenCand4 > porcenCand2 && porcenCand4 > porcenCand3 && porcenCand4 > porcenBranco && porcenCand4 > porcenNulo) {
    printf("O candidato com mais votos é o candidato 4 com porcentagem de %d", porcenCand4);
  } else if (porcenBranco > porcenCand1 && porcenBranco > porcenCand2 && porcenBranco > porcenCand3 && porcenBranco > porcenCand4 && porcenBranco > porcenNulo) {
    printf("O voto em branco recebeu mais votos com porcentagem de %d", porcenBranco);
  } else if (porcenNulo > porcenCand1 && porcenNulo > porcenCand2 && porcenNulo > porcenCand3 && porcenNulo > porcenCand4 && porcenNulo > porcenBranco) {
    printf("O voto nulo recebeu mais votos com porcentagem de %d", porcenNulo);
  } else {
    printf("Houve um empate de votos");
  }

  return 0;

}