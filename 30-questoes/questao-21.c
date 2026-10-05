#include <stdio.h>

// Quantidade de positivos e negativos

int main(){
  int vet_n[10], t_vet_n, vet_c[3];
  t_vet_n = sizeof(vet_n) / sizeof(vet_n[0]);
  printf("Informe 10 números\n");
  for(int i = 0; i < t_vet_n; i++){
    scanf("%d\n", &vet_n[i]);
    if(vet_n[i] == 0) vet_c[0] += 1;
    if(vet_n[i] > 0) vet_c[1] += 1;
    if(vet_n[i] < 0) vet_c[2] += 1;
  }
  printf("\nResumo dos dados informados\n");
  printf("Zeros: %d\n", vet_c[0]);
  printf("Positivos: %d\n", vet_c[1]);
  printf("Negativos: %d\n", vet_c[2]);
  return 0;
}
