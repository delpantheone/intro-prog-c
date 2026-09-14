#include <stdio.h>

// Par ou ímpar

int main() {
  int n1, idx;
  printf("Informe um número\n");
  scanf("%d", &n1);
  const char *opcoes[] = {"Par", "Ímpar"};
  idx = n1 & 1;
  printf("Resultado da operação:\n");
  printf("%s\n", opcoes[idx]);
  return 0;
}
