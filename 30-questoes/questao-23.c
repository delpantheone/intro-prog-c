#include <stdio.h>

// Maior número digitado

int main(){
  int v_num[10], maior, t_v_num;
  t_v_num = sizeof(v_num) / sizeof(v_num[0]);
  printf("Informe 10 números\n");
  for(int i = 0; i < t_v_num; i++){
    scanf("%d", &v_num[i]);
    if(v_num[i] > maior) maior = v_num[i];
  }
  printf("O maior número informado foi: %d\n", maior);
  return 0;
}
