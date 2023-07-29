#include <stdio.h>

int main(void) {

  int numeroFuncionario, salarioPorHora;
  float horasTrabalhadas, salarioTotal;

  scanf("%i", &numeroFuncionario);
  scanf("%i", &salarioPorHora);
  scanf("%f", &horasTrabalhadas);
  
  salarioTotal = salarioPorHora * horasTrabalhadas;
  
  printf("NUMBER = %i\n", numeroFuncionario);
  printf("SALARY = U$ %.2f\n", salarioTotal);
  
}
