#include <stdio.h>
#include <math.h>

// Números primos

int main(){
  unsigned int x, r;
  unsigned char cond;
  printf("Insira um número inteiro positivo para saber se ele é um número primo.\n");
  scanf("%u", &x);
  r = (int)sqrt(x);
  cond = 0;
  for(int i = 1; i <= r; i++){
    if(i > 1 && x % i == 0){
      cond = 1;
      break;
    }
  }
  printf(x == 1 ? "%d não é primo\n": cond > 0 ? "%d não é primo\n" : "%d é primo\n", x);
  return 0;
}
