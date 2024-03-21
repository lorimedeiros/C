#include <stdio.h>

int main(void) {

  int X, Y, SOMA;
  SOMA = 0;
  
  scanf("%i", &X);
  scanf("%i", &Y);

  printf("\nIntervalo:\n");
  for (int i = X + 1; i < Y; i++) {
      printf("%d\n", i);
  }

  printf("\nNúmeros pares no intervalo:\n");
  for (int i = X + 1; i < Y; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }

  printf("\nNúmeros impares no intervalo:\n");
  for (int i = X + 1; i < Y; i++) {
    if (i % 2 != 0) {
      printf("%d\n", i);
    }
  }

  printf("\nSoma dos números do intervalo: ");
  for (int i = X + 1; i < Y; i++) {
    SOMA += i;
  }
  printf("%d\n", SOMA);
  
}
