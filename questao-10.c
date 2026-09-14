#include <stdio.h>

// Calculadora simples

float som(float a, float b){
  return a + b;
}

float sub(float a, float b){
  return a - b;
}

float mul(float a, float b){
  return a * b;
}

float div(float a, float b){
  return a / b;
}

typedef float (*OperacaoAritmetica)(float,float);

int main(){
  int n1, n2, idx, t_vet_opcoes;
  char op;
  OperacaoAritmetica fn[] = {som, sub, mul, div};
  const char vet_opcoes[] = {'+', '-', '*', '/'};
  printf("Informe dois números\n");
  scanf("%d%d", &n1, &n2);
  printf("Escolha uma operação digitando um símbolo entre (+,-,*,/)\n");
  scanf(" %c", &op);
  t_vet_opcoes = sizeof(vet_opcoes) / sizeof(vet_opcoes[0]);
  for(int i = 0; i < t_vet_opcoes; i ++){
    if(vet_opcoes[i] == op){
      idx = i;
      break;
    }
    idx = -1;
  }
  if(idx < 0) {
    printf("Opção inválida: %c\n", op);
    return 0;
  }
  if(op == '/' && n2 == 0){
    printf("Não há divisão por zero\n");
    return 0;
  }
  printf("%d %c %d = %.2f\n", n1, op, n2, fn[idx](n1,n2));
  return 0;
}
