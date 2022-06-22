#include <stdio.h>

int main(void) {
  int v[] = {6, 9, 5, -3, 17, 22, 13,81, 44, 32};
  int n = 10, chave;
  printf ("Digite o valor a ser buscado: ");
  scanf ("%d", &chave);

  int i, achou = 0;
  for (i = 0; i < n; i++){
    if (v[i] == chave){
      printf ("Encontrado em %i\n", i);
      achou = 1;
    }
  }
  if (!achou)
    printf ("Não achei!\n");
  return 0;
}