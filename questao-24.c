#include <stdio.h>

// Maior e menor número digitado

int main(){
  unsigned int t_num;
  printf("Informe quantos números irá digitar\n");
  scanf("%u", &t_num);
  int v_num[t_num], maior, menor;
  printf("Informe os números abaixo\n");
  for(int i = 0; i < t_num; i++){
    scanf("%d", &v_num[i]);
    if(v_num[i] > maior) maior = v_num[i];
    if(v_num[i] < menor) menor = v_num[i];
  }
  printf("O maior número informado foi: %d\n", maior);
  printf("O menor número informado foi: %d\n", menor);
  return 0;
}
