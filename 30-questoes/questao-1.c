#include <stdio.h>

// Antecessor e sucessor

int main(){
  int n1;
  printf("Informe um número\n");
  scanf("%d", &n1);
  printf("O antecessor é: %d\n", --n1);
  printf("O sucessor é: %d\n", ++n1);
  return 0;
}
