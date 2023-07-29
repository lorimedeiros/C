#include <stdio.h>

int main(void) {

  char nomeFuncionario[20];
  float salarioFixo, totalVendas, TOTAL;

  scanf("%s", nomeFuncionario);
  scanf("%f", &salarioFixo);
  scanf("%f", &totalVendas);

  TOTAL = salarioFixo + (totalVendas * 0.15);

  printf("TOTAL = R$ %.2f\n", TOTAL);
  
}
