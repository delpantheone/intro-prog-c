#include <stdio.h>

// Média da turma

int main(){
  unsigned int t_alunos;
  printf("Informe o total de alunos da turma\n");
  scanf("%u", &t_alunos);
  float v_notas[t_alunos], acc, t_alunos_f;
  t_alunos_f = t_alunos;
  printf("Informe a nota final de cada aluno (até 2 casas decimais)\n");
  for(int i = 0; i < t_alunos ; i++) scanf("%f", &v_notas[i]);
  for(int i = 0; i < t_alunos ; i++) acc += v_notas[i];
  printf("Média geral da turma: %.2f\n", acc / t_alunos_f);
  return 0;
}
