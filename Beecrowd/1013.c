#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a, b, c;
  int MaiorAB, MaiorFinal;
  
  scanf("%i %i %i", &a, &b, &c);

  MaiorAB = (a + b + abs(a - b)) / 2;
  MaiorFinal = (MaiorAB + c + abs(MaiorAB - c)) / 2;

  printf("%i eh o maior\n", MaiorFinal);
  
}
