#include <stdio.h>

// Validacao de entrada

int main(){
  int n1, v_permitidos[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, t_vet, cond;
  t_vet = sizeof(v_permitidos) / sizeof(v_permitidos[0]);
  printf("Informe valores entre 0 e 10\n");
  while(1){
    cond = 0;
    scanf("%d", &n1);

    for(int i = 0; i < t_vet; i++){
      if(n1 == v_permitidos[i]){
        cond = 1;
        break;
      }
    }

    if(cond == 0) break;
  }
  return 0;
}
