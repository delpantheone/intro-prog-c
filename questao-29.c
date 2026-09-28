#include <stdio.h>

// Fibonacci

int main(){
  int x;
  printf("Insira um número para ver sua sequência de Fibonnaci\n");
  scanf("%d", &x);
  if(x < 0) return printf("Não há sequência Fibonacci de números negativos\n");
  if(x <= 1) return printf("1\n");
  int fib[2];
  char idx;
  fib[0] = 0;
  fib[1] = 1;
  for(int i = 2; i <= x; i++){
    idx = i & 1;
    fib[idx] = fib[0] + fib[1];
    printf("%d\n", fib[idx]);
  }
  return 0;
}
