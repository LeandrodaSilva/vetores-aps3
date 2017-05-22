
#include<stdio.h>

#define t 4

int main(){

    int vet[t],i,maior = 0, menor = 0;

    printf("Informe um valor: ");
    scanf("%d", &vet[0]);
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
