#include <stdio.h>

// Soma de pares entre 1 a n

int main(){
  int n1, acc;
  printf("Insira um número inteiro positivo para ver a soma de todos os pares entre 1 a N\n");
  scanf("%d", &n1);
  acc = 2;
  for(int i = 1; i <= n1; i++){
   if((i & 1) == 0){
     printf("%d + %d = %d\n", acc, i, acc + i);
     acc += i;
   }
  }
  return 0;
}
