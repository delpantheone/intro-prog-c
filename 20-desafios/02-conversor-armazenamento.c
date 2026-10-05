#include <stdio.h>

// Conversor de armazenamento

int main(){
  unsigned int dados_gb;
  float dados_mb, dados_kb;
  printf("Informe o espaço do armazenamento em gigabytes\n");
  scanf("%u", &dados_gb);
  dados_mb = (float)dados_gb * 1024;
  dados_kb = dados_mb * 1024;
  printf("Total em MB: %.2f\n", dados_mb);
  printf("Total em KB: %.2f\n", dados_kb);
  return 0;
}
