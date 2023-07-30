#include <stdio.h>

int main(void) {

  int X;
  float Y, consumoMedio;

  scanf("%i", &X);
  scanf("%f", &Y);

  consumoMedio = X / Y;

  printf("%.3f km/l\n", consumoMedio);
  
}
