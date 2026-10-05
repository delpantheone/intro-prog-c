#include <stdio.h>

// Terminal de atendimento

void menu(){
  printf("MENU PRINCIPAL\n\n");
  printf("1 - Suporte técnico\n");
  printf("2 - Financeiro\n");
  printf("3 - Comercial\n");
  printf("4 - Cancelamento\n");
}

int main(){
  unsigned int opcao;
  menu();

  scanf("%u", &opcao);

  switch (opcao) {
    case 1:
      printf("Redirecionando para suporte técnico\n");
      break;
    case 2:
      printf("Redirecionando para setor financeiro\n");
      break;
    case 3:
      printf("Redirecionando para setor comercial\n");
      break;
    case 4:
      printf("Redirecionando para setor de cancelamento\n");
      break;
    default:
      printf("Opção inválida!");
  }
}
