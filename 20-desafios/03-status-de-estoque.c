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

  char *opcoes[] = {"esgotado", "disponível"};

  bool status = produto_esta_disponivel(produto);

  printf("O produto \"%s\" está \"%s\"", produto.nome, opcoes[status]);

  // Versão com ternário

  // printf(status == 1 ? "Produto %s está disponível" : "Produto %s está esgotado", produto.nome);

  return 0;
}
