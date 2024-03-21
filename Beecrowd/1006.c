#include <stdio.h>

int main(void) {

  float A, B, C, MEDIA;

  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);

  MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
  
  printf("MEDIA = %.1f\n", MEDIA);
  
}
