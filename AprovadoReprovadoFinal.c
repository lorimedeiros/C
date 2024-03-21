#include <stdio.h>

int main(void) {

  double X, Y, Z, MEDIA;
  
  printf( "Digite a primeira nota: ");
  scanf("%lf", &X);
  printf( "Digite a segunda nota: ");
  scanf("%lf", &Y);
  printf( "Digite a terceira nota: ");
  scanf("%lf", &Z);

  MEDIA = (X + Y + Z) / 3;

  printf("Média = %.1lf\n", MEDIA);
  if (MEDIA >= 7){
    printf("Situação: aprovado\n");
  } else if (MEDIA >= 4){
    printf("Situação: recuperação\n");
  } else {
    printf("Situação: reprovado\n");
  }
  
}
