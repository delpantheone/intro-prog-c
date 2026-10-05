#include <stdio.h>

// Simulador de salário líquido

int main(){
  unsigned int salario, desc1, desc2;
  printf("Informe salário\n");
  scanf("%d", &salario);
  printf("Informe os descontos 1 e 2\n");
  scanf("%u %u", &desc1, &desc2);
  printf("Salário inicial: %d\n", salario);
  salario = salario - (salario * (desc1 / 100));
  printf("Desconto 1: %d\n", (salario * (desc1 / 100)));
  salario = salario - (salario * (desc2 / 100));
  printf("Desconto 2: %d\n", (salario * (desc2 / 100)));
  printf("Salário após descontos: %d", salario);
  return 0;
}
