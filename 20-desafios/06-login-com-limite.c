#include <stdio.h>
#include <string.h>

// Login com limite de tentativas

int main(){
  const char *senha = "senha-segura-123";
  char entrada[50], contador;
  contador = 0;
  printf("Informe a senha\n");
  while(contador < 3){

    scanf("%49s", entrada);
    
    if(strcmp(entrada, senha) == 0){
      printf("Acesso autorizado!\n");
      break;
    } else {
      printf("Senha incorreta. Tente novamente:\n");
      contador++;
    }
  }

  if(contador == 3) printf("Usuário bloqueado!");

  return 0;
}
