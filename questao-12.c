#include <stdio.h>

// Dia da semana

int main(){
  int n1;
  printf("Informe um número de 1 a 7 para saber o dia da semana\n");
  scanf("%d", &n1);
  switch(n1){
    case 1:
      printf("Segunda\n");
      break;
    case 2:
      printf("Terça\n");
      break;
    case 3:
      printf("Quarta\n");
      break;
    case 4:
      printf("Quinta\n");
      break;
    case 5:
      printf("Sexta\n");
      break;
    case 6:
      printf("Sábado\n");
      break;
    case 7:
      printf("Domingo\n");
      break;
    default:
      printf("Opção inválida!\n");
      break;
  }
  return 0;
}
