#include <stdio.h>

// Menu de operações

int main(){
  while(1){
    int cond;
    float n1, n2, res;
    char op;
    cond = -1;
    printf("Informe dois números\n");
    scanf("%f%f", &n1, &n2);
    printf("Informe o símbolo de uma operação entre (+,-,*,/)\n");
    scanf(" %c", &op);
    switch(op){
      case '+':
        res = n1 + n2;
        cond = 1;
        break;
      case '-':
        res = n1 - n2;
        cond = 1;
        break;
      case '*':
        res = n1 * n2;
        cond = 1;
        break;
      case '/':
        if(n2 == 0){
          printf("O divisor não pode ser zero\n");
          break;
        }
        cond = 1;
        res = n1 / n2;
        break;
      default:
        printf("Opção inválida!\n");
        break;
    }
    if(cond < 0) break;
    printf("%.2f %c %.2f = %.2f\n", n1, op, n2, res);
  }
  return 0;
}
