#include <stdio.h>

// Carrinho de compras

int main(){
  int acc = 0, contador = 0, preco_produto;
  while (preco_produto > 0) {
    printf("Insira o preço do produto ou 0 para encerrar\n");
    scanf("%d", &preco_produto);

    if(preco_produto < 0){
      printf("Valores negativos não são permitidos!");
    } else {
      acc += preco_produto;
      contador++;
    }
  }

  printf("Subtotal da compra: %d\n", acc);
  printf("Total de produtos comprados: %d\n", contador);

  return 0;
}
