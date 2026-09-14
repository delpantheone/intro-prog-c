#include <stdio.h>

// Maior entre três números

int main(){
  int n1, n2, n3, idx, t_vect;
  printf("Informe 3 números\n");
  scanf("%d%d%d", &n1, &n2, &n3);
  int vect[] = {n1, n2, n3};
  t_vect = sizeof(vect) / sizeof(vect[0]);
  idx = 0;
  for(int i = 0; i < (t_vect - 1) ; i++){
    // if(vect[idx] <= vect[i+1]) idx = i+1;
    int cond = vect[idx] <= vect[i+1];
    int mask = -cond;
    idx = idx ^ ((idx ^ (i+1)) & mask);
  }
  printf("O maior número informado foi: %d\n", vect[idx]);
  return 0;
}
