
#include<stdio.h>

#define t 5

int main(){

    int vet[t],i,maior = 0, menor = 0,valor_int = 0;
    float valor_inf;

    printf("Informe um valor: ");
    scanf("%f", &valor_inf);

    valor_int = (int) valor_inf;

    if (valor_inf == valor_int) {
      /* Se o valor for inteiro */

    } else {
      /* mensagem de erro */
      printf("\nInforme somente valores inteiros!");
    }
    maior = menor = vet[0];

    for(i = 1; i < t; i++){
        printf("Informe um valor: ");
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    for(i = 0; i < t; i++){
        printf("%d | ",vet[i]);
    }

    printf("\nMaior: %d\nMenor: %d\n",maior,menor);



    return 0;
}
