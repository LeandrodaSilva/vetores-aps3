/* Elabore um programa que receba um vetor A de dez elementos
inteiros. Esse programa deve calcular o fatorial de cada
elemtento  de A e armazená-los em um vetor B. O programa deve
mostrar o vetor A e o vetor B ao seu final.*/

#include <stdio.h>

#define  tam 5

int main(int argc, char const *argv[]) {

  int vetor_A[tam],vetor_B[tam],num_int = 0,pos_vetor = 0,fat;

  float num_inf;

  while (pos_vetor < tam) {
    /* leitura do vetor A */
    printf("\nValor para o vetor: ");
    scanf("%f", &num_inf);

    num_int = (int) num_inf;

    if (num_int == num_inf) {
      /* se for inteiro*/
      vetor_A[pos_vetor] = num_inf;

      for(fat = 1; num_inf > 1; num_inf = num_inf - 1){
        fat = fat * num_inf;
      }
      vetor_B[pos_vetor] = fat;
      pos_vetor++;
    }else{
      printf("\nValor inválido.");
    }
  }

  printf("\nVetor A\n\n");

  for ( pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* imprime o vetor */
    printf("| %d ",vetor_A[pos_vetor]);
  }

  printf("|\n\nVetor B\n\n");

  for ( pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* imprime o vetor */
    printf("| %d ",vetor_B[pos_vetor]);
  }
  printf("|\n");

  return 0;
}
