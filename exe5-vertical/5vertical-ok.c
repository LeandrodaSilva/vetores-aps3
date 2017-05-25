/*a)Preencher um vetor A com 25 números inteiros e positivos,
sem repetições (o algoritmo deve controlar estas restrições).
b) Inserir em um vetor B, a partir do seu início, os números
pares do vetor A e, a partir do seu final, os números ímpares
do vetor A (este item deve ser resolvido com apenas um única
estrutura de repetição).
c) Mostrar o conteúdo do vetor B, indicado a posição de cada
número no vetor B e no vetor A.
d) Intercalar o conteúdo do vetor A (a partir do início) e B
(a partir do final) em um vetor C (com o tamanho 50) (este
 item deve ser resolvido com apenas uma única estutura de
repetição).*/
#include <stdio.h>
#include <string.h>


char inteiro(float num_inf, int pos_vetor){

  char inteiro_pos[] = "inteiro positivo",inteiro_neg[] = "inteiro negativo"
  ,real_pos[] = "real positivo",resultado[17],real_neg[] = "real negativo",
  zero[] = "zero";
  int num_int = 0;

  num_int = (int) num_inf;

  if (num_inf == num_int && num_inf > 0) {
    /* se for inteiro_pos */
    resultado[pos_vetor] = inteiro_pos[pos_vetor];
  }
  if (num_inf == num_int && num_inf < 0) {
    /* se for inteiro_neg */
    resultado[pos_vetor] = inteiro_neg[pos_vetor];
  }
  if (num_inf != num_int && num_inf > 0) {
    /* se for real_pos */
    resultado[pos_vetor] = real_pos[pos_vetor];
  }
  if (num_inf != num_int && num_inf < 0) {
    /* se for real_neg */
    resultado[pos_vetor] = real_neg[pos_vetor];
  }
  if (num_inf == 0) {
    /* se for zero */
    resultado[pos_vetor] = zero[pos_vetor];
  }

  return resultado[pos_vetor];
}

#define tam 25
#define tam_vetor_C 50

int main(int argc, char const *argv[]) {

  int vetor_A[tam],pos_vetor = 0,pos_vetor_teste = 0,
  teste = 0,i,vetor_B[tam],pos_inicio,pos_fim,imprime = 0
  ,vetor_C[tam_vetor_C];
  char resultado[17];
  float  num_inf;

  while (pos_vetor < 1) {
    /* Coleta o primeiro valor do vetor  A*/
    printf("%d Valor: ",pos_vetor+1);
    scanf("%f", &num_inf);

    for (i = 0; i < 17; i++) {
      /* verifica o numero digitado */
      resultado[i] = inteiro(num_inf,i);
    }

    if (strcmp(resultado, "inteiro positivo") == 0) {
      /* se for inteiro_pos */
      vetor_A[pos_vetor] = num_inf;
      pos_vetor++;
    }else{
      printf("\nErro!\nFoi informado um %s\n", resultado);
    }
  }

  while (pos_vetor > 0 && pos_vetor < tam) {
    /* Coleta os demais valores e
    verifica numeros repetidos */
    printf("%d Valor: ",pos_vetor+1);
    scanf("%f", &num_inf);

    for (i = 0; i < 17; i++) {
      /* verifica o numero digitado */
      resultado[i] = inteiro(num_inf,i);
    }

    if (strcmp(resultado, "inteiro positivo") == 0) {
      /* Se o valor informado for inteiro positivo*/

      for (pos_vetor_teste = 0; pos_vetor_teste < pos_vetor; pos_vetor_teste++) {
        /* Verifica valores repetidos */
        if (num_inf != vetor_A[pos_vetor_teste]) {
          /* Se o numero informado for diferente
          adiciona +1 no teste e vai para a proxima
          posicao do vetor_A*/
          teste++;
        }

      }

      if (teste == pos_vetor) {
        /* se passar no teste */
        vetor_A[pos_vetor] = num_inf;
        pos_vetor++;
      }else{
        printf("\nErro!\nInforme um valor diferente.\n");
      }
      teste = 0;

    }else{
      printf("\nErro!\nFoi informado um %s\n", resultado);
    }

  }
  pos_inicio = 0;
  pos_fim = tam - 1;

  for (pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* cria o vetor_B */
    if (vetor_A[pos_vetor] % 2 == 0) {
      /* se o vetor_A for par */
      vetor_B[pos_inicio] = vetor_A[pos_vetor];
      pos_inicio++;
    }else{
      /*se o vetor_A for impar */
      vetor_B[pos_fim] = vetor_A[pos_vetor];
      pos_fim--;
    }
  }

  pos_vetor = 0;
  for (pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* code */
    if (pos_vetor == 0) {
      printf("\n+---------+-----------+-----------+");
      printf("\n| Posicao |  Vetor A  |  Vetor B  |");

    }

    if (pos_vetor >= 0) {
      /* code */
      printf("\n|---------|-----------|-----------|");
      printf("\n|%5.d    |%6.d     |%6.d     |",pos_vetor+1,vetor_A[pos_vetor],vetor_B[pos_vetor]);
    }
    if (pos_vetor == tam-1) {
      /* code */
      printf("\n+---------+-----------+-----------+" );
    }



  }


  printf("\n\n" );


  pos_inicio = 0;
  pos_fim = tam_vetor_C - 1;

  for (pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* cria o vetor_C */
    if (pos_inicio < tam) {
      /* insere o vetor_A no vetor_C  a partir do inicio*/
      vetor_C[pos_inicio] = vetor_A[pos_vetor];
      pos_inicio++;
    }
    if (pos_fim > 0) {
      /* insere o vetor_B no vetor_C a partir do fim */
      vetor_C[pos_fim] = vetor_B[pos_vetor];
      pos_fim--;
    }
  }
  for (pos_vetor = 0; pos_vetor < tam_vetor_C; pos_vetor++) {
    /* code */
    if (pos_vetor == 0) {
      printf("\n+---------+-----------+");
      printf("\n| Posicao |  Vetor C  |");

    }

    if (pos_vetor >= 0) {
      /* code */
      printf("\n|---------|-----------|");
      printf("\n|%5.d    |%6.d     |",pos_vetor+1,vetor_C[pos_vetor]);
    }
    if (pos_vetor == tam_vetor_C-1) {
      /* code */
      printf("\n+---------+-----------+" );
    }



  }

  printf("\n\n\n" );

  return 0;
}
