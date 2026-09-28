#include <stdio.h>

// Preenchendo um vetor com valores fornecidos pelo usuário

int main(){
  int vetor[5];

  printf("Insira um número inteiro\n");

  for (int i = 0; i < 5; i++) {
      printf("Elemento %d: \n", i+1);
      scanf("%d", &vetor[i]);
  }

  printf("Vetor inserido pelo usuário: \n");
  for (int i = 0; i < 5; i++) {
    printf("%d\n", vetor[i]);
  }

  printf("\n");

  return 0;
}
