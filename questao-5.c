#include <stdio.h>

// Positivo, negativo, zero

int main(){
  int n1, cond_neg, cond_zero;
  printf("Insira um número:\n");
  scanf("%d", &n1);
  // cond_pos = n1 > 0;
  cond_neg = n1 < 0;
  cond_zero = n1 == 0;
  const char *opcoes[] = {"Positivo", "Negativo", "Zero"};
  // int idx = (0 * cond_pos) + (1 * cond_neg) + (2 * cond_zero);
  int idx = cond_neg | cond_zero << 1;
  printf("%s\n", opcoes[idx]);
  return 0;
}
