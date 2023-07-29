#include <stdio.h>

int main(void) {

  float area, n, raio;

  n = 3.14159;
  scanf("%f", &raio);

  area = n * (raio * raio);

  printf("A=%.4f\n", area);
  
}
