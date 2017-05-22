#include<stdio.h>

#define t 4

int main(){

    int vet[t],i,s = 0,primeiro,ultimo;

    for(i = 0; i < t; i++){
        printf("Informe o valor: ");
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < t; i++){
        printf("%d | ",vet[i]);
    }

    primeiro = vet[0];
    ultimo = vet[t-1];

    for(i = 0; i< t; i++){
        if(vet[i] % 2 == 0){
            vet[i] = primeiro;

        }
        if(vet[i] % 2 != 0){
            vet[i] = ultimo;
        }

    }

        printf("\n\n");
        for(i = 0; i < t; i++){
            printf("%d | ",vet[i]);
        }



    return 0;
}
