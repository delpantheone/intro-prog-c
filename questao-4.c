#include <stdio.h>

// Média de três notas

int main(){
  float n1, n2, n3, media;
  printf("Informe as 3 notas de um aluno:\n");
  scanf("%f%f%f", &n1, &n2, &n3);
  media = (n1+n2+n3)/3;
  printf("A média aritmética das notas é: %.2f\n", media);
  return 0;
}
