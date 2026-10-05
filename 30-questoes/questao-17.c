#include <stdio.h>

// Tabuada de multiplicação

int main(){
  int n1;
  printf("Insira um número e veja sua tabuada de multiplicação\n");
  scanf("%d", &n1);
  for(int i = 1; i <= n1; i++) printf("%d * %d = %d\n", n1, i, i*n1);
  return 0;
}
