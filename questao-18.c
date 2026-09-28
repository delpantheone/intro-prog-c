#include <stdio.h>

// Soma de 1 a n

int main(){
  int n1, soma;
  printf("Insira um número inteiro positivo para ver a soma de todos os números de 1 a N\n");
  scanf("%d", &n1);
  soma = n1 * (n1 + 1) >> 1;
  printf("%d", soma);
  return 0;
}
