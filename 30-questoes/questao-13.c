#include <stdio.h>

// Contagem crescente

int main(){
  unsigned int n1;
  printf("Informe um número inteiro positivo\n");
  scanf("%u", &n1);
  for(int i = 1; i <= n1; i++) printf("%d\n", i);
  return 0;
}
