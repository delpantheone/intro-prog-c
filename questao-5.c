#include <stdio.h>

// Positivo, negativo, zero

int main(){
  int n1, cond_neg, cond_zero, idx;
  printf("Insira um número:\n");
  scanf("%d", &n1);
  char *opcoes[] = {"Zero", "Negativo", "Positivo"};
  cond_zero = n1 > 0;
  idx = (n1 >> 31) & 1 | cond_zero * 2;
  printf("%s\n", opcoes[idx]);
  return 0;
}
