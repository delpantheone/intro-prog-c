#include <stdio.h>

// Faixa etária

int main(){
  int idade, c_crianca, c_adolescente, c_adulto, c_idoso, idx;
  printf("Informe a idade de uma pessoa\n");
  scanf("%d", &idade);
  const char *opcoes[] = {"criança", "adolescente", "adulta", "idosa"};
  c_crianca = idade >= 0 && idade < 12;
  c_adolescente = idade >= 12 && idade < 18;
  c_adulto = idade >= 18 && idade < 50;
  c_idoso = idade >= 50;
  idx = (0 * c_crianca) + (1 * c_adolescente) + (2 * c_adulto) + (3 * c_idoso);
  printf("Esta pessoa é %s\n", opcoes[idx]);
  return 0;
}
