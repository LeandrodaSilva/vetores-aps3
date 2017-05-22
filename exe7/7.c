#include <stdio.h>

#define  tam 5
#define  tam2 5


int main(int argc, char const *argv[]) {
  /* Faça um programa que carregue um vetor com 20 números inteiros
  não repetidos e um segundo vetor com 15 números inteiros não
  repetidos (o algoritmo deve garantir que os números para os
  vetores não sejam repetidos). Calcule e mostre dois vetores
  resultantes. O primeiro vetor resultante será composto
  pelos números pares gerados pelo elemento do primeiro vetor
  somado a todos os elementos do segundo vetor. O segundo vetor
  resultante será composto pelos número ímpares gerados pelo
  elemento do primeiro vetor somado a todos os elementos do
  segundo vetor.*/

  int vetor_A[tam],pos_vetor = 0,
  vetor_B[tam],valor_int = 0,pos_vetor_teste = 0,
  teste = 0;
  float  valor_inf;

  while (pos_vetor < 1) {
    /* Coleta o primeiro valor do vetor  A*/
    printf("%d Valor: ",pos_vetor+1);
    scanf("%f", &valor_inf);

    valor_int = (int) valor_inf;

    if (valor_inf == valor_int) {
      /* se o valor informado for inteiro */
      vetor_A[pos_vetor] = valor_inf;
      pos_vetor++;
    }else{
      printf("\nInforme somente valores inteiros!\n");
    }
  }

  while (pos_vetor > 0 && pos_vetor < tam) {
    /* Coleta os demais valores e
    verifica numeros repetidos */
    printf("%d Valor: ",pos_vetor+1);
    scanf("%f", &valor_inf);

    valor_int = (int) valor_inf;

    if (valor_inf == valor_int) {
      /* Se o valor informado for inteiro */

      for (pos_vetor_teste = 0; pos_vetor_teste < pos_vetor; pos_vetor_teste++) {
        /* Verifica valores repetidos */
        if (valor_inf != vetor_A[pos_vetor_teste]) {
          /* Se o numero informado for diferente
          adiciona +1 no teste e vai para a proxima
          posicao do vetor_A*/
          teste++;
        }

      }
      printf("\n%d\n",teste);
      if (teste == pos_vetor) {
        /* se passar no teste */
        vetor_A[pos_vetor] = valor_inf;
        pos_vetor++;
      }
      teste = 0;

    }else{
      printf("\nInforme somente valores inteiros!\n");
    }

  }



  return 0;
}
