#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Jogo de advinhação

int main(){
  srand(time(NULL));
  int numero_computador = (rand() % 101);
  int numero_usuario = -1;
  unsigned int contador = 0;

  printf("Advinhe o número gerado pelo computador (entre 0 e 100 - ambos inclusos)\n");

  while (numero_computador != numero_usuario) {
    printf("Digite seu palpite: ");

    if (scanf("%d", &numero_usuario) != 1) {
      printf("Por favor, digite apenas números inteiros.\n");
      while (getchar() != '\n');
      contador++;
      continue;
    }

    contador++;
    if (numero_usuario < 0 || numero_usuario > 100) {
      printf("Insira um número entre 0 e 100!\n");
      continue;
    }

    if (numero_usuario < numero_computador) {
      printf("O número secreto é MAIOR!");
      if (numero_computador - numero_usuario <= 10) {
        printf(" (Você está perto...)");
      }
      printf("\n");
    } else if (numero_usuario > numero_computador) {
      printf("O número secreto é MENOR!");
      if (numero_usuario - numero_computador <= 10) {
        printf(" (Você está perto...)");
      }
      printf("\n");
    }
  }
  printf("Parabéns! Você descobriu o número aleatório (%d)!\n", numero_computador);
  printf("Tentativas realizadas: %u\n", contador);
  return 0;
}
