#include <stdio.h>

// Quantidade de positivos e negativos

int main(){
  int n;
  unsigned char q_pos, q_neg, q_zer;
  printf("Informe 10 números\n");
  for(int i = 0; i < 10; i++){
    scanf("%d\n", &n);
    q_neg += (n >> 31) & 1;
    q_pos += ((0 -n) >> 31) & 1;
    q_zer += n == 0;
  }
  printf("\nResumo dos dados informados\n");
  printf("Zeros: %d\n", q_zer);
  printf("Positivos: %d\n", q_pos);
  printf("Negativos: %d\n", q_neg);
  return 0;
}
