#include <stdio.h>

// Monitoramento de servidor

int main(){
  int valor_leitura, vet_leituras[3];
  for(char i = 0; i < 3; i++) vet_leituras[i] = 0;
  while(valor_leitura > -1){
    printf("Informe o valor da leitura em %% ou -1 para encerrar\n");
    scanf("%d", &valor_leitura);
    char idx = 0;
    if (valor_leitura > 0 && valor_leitura <= 69) {
      idx = 0;
    }
    if (valor_leitura > 69 && valor_leitura <= 89) {
      idx = 1;
    }
    if (valor_leitura > 89 && valor_leitura <= 100) {
      idx = 2;
    }
    printf("%d\n", idx);
    vet_leituras[idx]++;
  }

  printf("Total de leituras críticas: %d\n", vet_leituras[2]);

  return 0;
}
