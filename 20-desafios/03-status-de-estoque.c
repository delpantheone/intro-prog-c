#include <stdbool.h>
#include <stdio.h>

// Status de estoque

struct Produto {
  char *nome;
  int estoque;
};

bool produto_esta_disponivel(struct Produto produto){
 return produto.estoque > 0;
};

int main(){
  struct Produto produto;

  produto.nome = "Abóbora";
  produto.estoque = 2;

  char *opcoes[] = {"Disponível", "Esgotado"};

  bool status = produto_esta_disponivel(produto);

  printf("O produto \"%s\" está \"%s\"", produto.nome, opcoes[status]);

  return 0;
}
