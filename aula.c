#include <stdio.h>
#include <stdbool.h>

int main(){
  int vetor[5] = {10, 20, 30, 40, 50};
  int numero;
  printf("Insira um número inteiro\n");
  scanf("%d", &numero);
  bool encontrado = false;

  for (int i = 0; i < 5; i++) {
    if (vetor[i] == numero) {
      encontrado = true;
      break;
    }
  }

  if (encontrado){
    printf("O número %d está presente no vetor.\n", numero);
  } else {    
    printf("O número %d não está presente no vetor.\n", numero);
  }

  return 0;
}
