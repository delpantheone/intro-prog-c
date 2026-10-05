#include <stdio.h>
#include <string.h>

// Senha de acesso

int main(){
  const char *senha = "senha-segura-123";
  char entrada[50];
  printf("Informe a senha\n");
  while(1){

    scanf("%49s", entrada);
    
    if(strcmp(entrada, senha) == 0){
      printf("Acesso autorizado!\n");
      break;
    } else {
      printf("Senha incorreta. Tente novamente:\n");
    }
  }
  return 0;
}
