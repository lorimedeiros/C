#include <stdio.h>

int main(void) {

  int codP1, codP2, qtP1, qtP2;
  float valP1, valP2, vtP1, vtP2, TOTAL;

  scanf("%i %i %f", &codP1, &qtP1, &valP1);
  scanf("%i %i %f", &codP2, &qtP2, &valP2);

  vtP1 = qtP1 * valP1;
  vtP2 = qtP2 * valP2;

  TOTAL = vtP1 + vtP2;

  printf("VALOR A PAGAR: R$ %.2f\n", TOTAL); 
  
}
