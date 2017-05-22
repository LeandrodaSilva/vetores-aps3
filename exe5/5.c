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
#include <locale.h>

#define tam 5

int main(int argc, char const *argv[]) {

  int vetor[tam],num_inf = 0,
  pos_vetor = 0,
  pos_vetor_teste = 0,
  dif = 0,
  vetor_b[tam];

  float num_teste;
  setlocale(LC_ALL,"Portuguese");

  //Inicializa o vetor
  for (pos_vetor = 0; pos_vetor < tam; pos_vetor++) {
    /* inicializa o vetor com 0 */
    vetor[pos_vetor] = 0;
  }
  pos_vetor = 0;

  //Coleta  o primeiro valor do vetor A na posicao 0
  do {
    /* code */
    printf("\nInforme o valor para o vetor.");
    printf("\n%d Valor: ",pos_vetor+1);
    scanf("%f", &num_teste);

    num_inf = (int) num_teste;

    if (num_inf == num_teste && num_inf > 0) {
      /* se for inteiro e positivo */
      vetor[pos_vetor] = num_inf;
      pos_vetor++;
    }else{
      printf("\nValor inválido.");
    }
  } while(pos_vetor == 0);

  //Leitura do vetor A
  while (pos_vetor < tam && pos_vetor > 0) {
    /* testa numeros repetidos no vetor */
    printf("\nInforme o valor para o vetor.");
    printf("\n%d Valor: ",pos_vetor+1);
    scanf("%f", &num_teste);

    num_inf = (int) num_teste;

    if (num_inf == num_teste && num_inf > 0) {
      for (pos_vetor_teste = 0; pos_vetor_teste < tam; pos_vetor_teste++){
        /* testa o vetor */
        if (num_inf != vetor[pos_vetor_teste]) {
          /* se for diferente adiciona na contagem */
          dif++;
        }
      }

      if (dif == tam) {
        /* code */
        vetor[pos_vetor] = num_inf;
        dif = 0;
        pos_vetor++;
      }else{
        dif = 0;
      }
    }else{
      printf("\nValor inválido.");
    }


  }

  //Leitura do vetor B




  return 0;
}
