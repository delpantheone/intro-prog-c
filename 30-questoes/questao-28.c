#include <stdio.h>

// Divisores de um número

int main(){
  unsigned int n;
  printf("Informe um número inteiro positivo para descobrir seus divisores\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if(n % i == 0) printf("%u,", i);
  }
  printf("\n");
  return 0;
}
