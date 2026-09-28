#include <stdio.h>

// Retornando o valor absoluto de um número inteiro de 32 bits

int abs(int x){
  int mask;
  mask = x >> 31;
  return (x ^ mask) - mask;
}

// Retornar mínimo entre 2 números

int min(int x, int y){
  return ((x + y) - abs(x - y)) >> 1;
}

// Retornar máximo entre 2 números

int max(int x, int y){
  return ((x + y) + abs(x - y)) >> 1;
}

// Mapeamento de estados

int classifica_x(int x){
  const int FATOR[] = {10, 0, 100};
  int neg, pos, idx;
  neg = (x >> 31) & 1;
  pos = ((0 - x) >> 31) & 1;
  idx = pos - neg + 1;
  return FATOR[idx];
}

// Popcount de 4 bits via tabela de consulta

int contar_bits_lut(int x){
  const int LUT[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};
  return LUT[x & 0xf];
}

// Popcount de 32 bits via lut de 4 bits

int contar_grupos_de_bits(int x){ // sendo x um inteiro de 32 bits
  int acc = contar_bits_lut(x >> 0) +
            contar_bits_lut(x >> 4) +
            contar_bits_lut(x >> 8) +
            contar_bits_lut(x >> 12) +
            contar_bits_lut(x >> 16) +
            contar_bits_lut(x >> 20) +
            contar_bits_lut(x >> 24) +
            contar_bits_lut(x >> 28);
  return acc;
}


// Inversão paralela de bits

char inverter_char(unsigned char n){
  int mask = 0xf;
  return (n >> 4) & mask | (n & mask) << 4;
}

// Inversão paralela de 8 bits com tabela de consulta

unsigned char inverter_bits_8bits_lut(unsigned char x){
  const unsigned char LUT[16] = {0x0, 0x8, 0x4, 0xc, 0x2, 0xa, 0x6, 0xe, 0x1, 0x9, 0x5, 0xd, 0x3, 0xb, 0x7, 0xf};
  unsigned char n_left = (x & 0xf0) >> 4;
  unsigned char n_right = x & 0xf;
  return LUT[n_right] << 4 | LUT[n_left];
}

// Inversão paralela de 32 bits

unsigned int inverter_bits_32bits(unsigned int x){
  unsigned char b0, b1, b2, b3;
  b0 = x & 0xff;
  b1 = (x >> 8) & 0xff;
  b2 = (x >> 16) & 0xff;
  b3 = (x >> 24) & 0xff;
  unsigned int inv_x =  inverter_bits_8bits_lut(b0) << 24 |
                        inverter_bits_8bits_lut(b1) << 16 |
                        inverter_bits_8bits_lut(b2) << 8 |
                        inverter_bits_8bits_lut(b3) << 0;
  return inv_x;
}

// Detectar byte nulo

unsigned int tem_zero(unsigned int x){
  return (x - 0x01010101) & (~x) & 0x80808080 > 0;
}

int main(){
  unsigned int n1;
  printf("Insira um número inteiro positivo de 32 bits\n");
  scanf("%u", &n1);
  n1 = inverter_bits_32bits(n1);
  printf("Número invertido: %u\n", n1);
  return 0;
}
