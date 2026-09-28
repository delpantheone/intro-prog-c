#include <stdio.h>

// Divisores de um número

int main(){
  int n1;
  printf("Informe um número inteiro positivo para saber os seus divisores\n");
  scanf("%d", &n1);
  for(int i = 1; i <= n1; i++){
    if(n1 % i == 0) printf("%d\n", i);
  }
  return 0;
}
