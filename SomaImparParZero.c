#include <stdio.h>

int main(void) {

  int X, Y, SOMA;

  scanf("%i", &X);
  scanf("%i", &Y);

  SOMA = X + Y;
  
  if (SOMA == 0) {
    printf("A soma é zero!\n");
  } else if (SOMA % 2 == 0) {
    printf("A soma é par! Soma: %d\n", SOMA);
  } else {
    printf("A soma é ímpar! Soma: %d\n", SOMA);
  }
  
}
