#include <stdio.h>

// Análise de pedido

int main(){
  unsigned int v_compra, total_do_pedido, v_frete[] = {20, 0};
  printf("Informe o valor da compra?\n");
  scanf("%u", &v_compra);
  total_do_pedido = v_compra - v_frete[v_compra >= 200];
  printf("Valor da compra: %u\n", v_compra);
  printf("Frete: %u\n", v_frete[v_compra >= 200]);
  printf("Total do pedido: %u\n", total_do_pedido);
}
