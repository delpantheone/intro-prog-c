#include <stdio.h>

// Fatorial

int main(){
  unsigned int n1, acc;
  printf("Insira um número inteiro positivo para ver seu fatorial\n");
  scanf("%u", &n1);
  if(n1 <= 1){
    printf("1\n");
    return 0;
  }
  acc = 1;
  for(int i = 2; i <= n1; i++){
    acc *= i;
  }
  printf("%d! é %d\n", n1, acc);
  return 0;
}
