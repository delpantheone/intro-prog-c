#include <stdio.h>

// Conversor de temperatura

int main(){
  float temp_C;
  float temp_F;
  printf("Insira um valor de temperatura em graus Celsius:\n");
  scanf("%f", &temp_C);
  temp_F = (temp_C * 9/5) + 32;
  printf("Convertido em farenheit:\n");
  printf("%.2f\n", temp_F);
  return 0;
}
