#include <stdio.h>

int main(void) {

  float pi = 3.14159;
  float raio, volume;

  scanf("%f", &raio);

  volume = (4.0/3.0) * pi * (raio * raio * raio);

  printf("VOLUME = %.3f\n", volume);
  
}
