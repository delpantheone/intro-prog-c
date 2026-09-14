#include <stdio.h>

// Maior entre dois números

int main(){
  int n1, n2, c_menor, c_igual, idx;
  const char *opcoes[] = {"maior que", "menor que", "igual a"};
  printf("Informe 2 números\n");
  scanf("%d%d", &n1, &n2);
  c_menor = n1 < n2;
  c_igual = n1 == n2;
  idx = c_menor | c_igual << 1;
  printf("%d é %s %d\n", n1, opcoes[idx], n2);
  return 0;
}
