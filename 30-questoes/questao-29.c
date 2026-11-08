#include <stdio.h>

// Sequência de Fibonacci

int main(){
  int n_termos;
  printf("Insira a quantidade de termos da sequência Fibonacci\n");

  if (scanf("%d", &n_termos) != 1 || n_termos <= 0) {
    printf("Por favor, insira um número inteiro positivo maior que 0.\n");
    return 1;
  }

  unsigned int v_nums[2] = {0, 1};
  
  for(int i = 0; i < n_termos; i++) {
    if (i < 2) {
      printf("%u\n", v_nums[i]);
    } else {
      unsigned int proximo = v_nums[0] + v_nums[1];
      v_nums[i & 1] = proximo;
      printf("%u\n", proximo);
    }
  }
  return 0;
}
