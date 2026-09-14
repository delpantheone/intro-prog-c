#include <stdio.h>

// Contagem regressiva

int main(){
  unsigned int n1;
  printf("Informe um número inteiro positivo\n");
  scanf("%u", &n1);
  for(int i = n1; i >= 0; i--) printf("%d\n", i);
  return 0;
}
