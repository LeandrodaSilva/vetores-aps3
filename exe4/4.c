/* Faça um programa que preencha um vetor de 15 posições com
números inteiros, fornecidos pelo usuário. O algoritmo deve:
a) garantir que o vetor não tenha números repetidos;
b) garantir que o vetor tenha somente números pares maiores
do que 6;
c) mostrar o vetor ao final do preenchimento.*/
#include <stdio.h>
#include <locale.h>

#define  tam 5

int main(int argc, char const *argv[]) {

  setlocale(LC_ALL,"Portuguese");
  float num_inf;
  int ok = 0,num_int = 0,vetor[tam],cont_vetor = 0,cont_teste,teste = 0;

  for ( cont_vetor = 0; cont_vetor < tam; cont_vetor++) {
    vetor[cont_vetor] = 0;
  }
  cont_vetor = 0;
  while(cont_vetor < tam) {
    /* faz a contagem do vetor */
    printf("\nInforme um valor inteiro par e maior que 6.");
    printf("\n%d Valor: ",cont_vetor+1);
    scanf("%f", &num_inf);

    num_int = (int) num_inf;   //atribui o valor quebrado para teste

    if (num_int == num_inf) {  //se o valor for inteiro executa

      if (num_int % 2 == 0 && num_int > 6) {
        /* se for par*/
        if (cont_vetor == 0) {
          /* quando for o primeiro valor valido */
          vetor[cont_vetor] = num_int;
          cont_vetor++;
          printf("\e[H\e[2J");
        }else{
          ok = 1;
        }
        if (ok == 1) {
          /* Quando o primeiro valor ja foi coletado */
          teste = 0;
          for (cont_teste = 0; cont_teste < tam; cont_teste++) {
            /* Testa para procurar numeros repitidos */
            if (num_int != vetor[cont_teste]) {
              /* faz a soma de quantos numeros sao diferentes */
              teste++;
            }
          }
          if (teste == tam) {
            /* se teste for positivo == a posicao do vetor */
            vetor[cont_vetor] = num_int;
            cont_vetor++;
            printf("\e[H\e[2J");
          }
        }
      }else{
        printf("\e[H\e[2J");
        printf("\nAtenção!\nO valor informado é ímpar e menor que 6.\n"); //se for falso informa
      }

    } else {
      printf("\e[H\e[2J");
      printf("\nAtenção!\nValor decimal inválido.\n"); //se for falso informa
    }
  }
  printf("\n");
  for (cont_vetor = 0; cont_vetor < tam; cont_vetor++) {
    /* imprime o vetor */
    printf("%d  ",vetor[cont_vetor]);
  }
  return 0;
}
