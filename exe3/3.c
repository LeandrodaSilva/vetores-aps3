#include<stdio.h>
#include <stdlib.h>


#define t 5       //tamanho do vetor

int main(){


    int vetor[t],num,cont = 0,soma = 0;
    float num_test;


    printf("Informe o valor positivo, impar e inteiro para o vetor.");

    while (cont < t){

        printf("\nValor: ");
        scanf("%f", &num_test);

        num = (int) num_test; //testa se o número informado é inteiro

        if(num == num_test && num % 2 != 0 && num_test > 0){      //faz os testes e manda o numero para o vetor
                vetor[cont] = num;
                cont++;
        }else{
            printf("\nO valor informado nao e inteiro ou positivo ou impar\n");      //se der falso nos testes informa o usuario
        }
    }

	system("cls");
	printf("\nVetor original:\n\n");
	num = 0;  //reutilizando a variavel para fazer a contagem

    for (cont = 0; cont < t; cont++){   //imprime o vetor original

        printf("%d | ", vetor[cont]);
    
    	if(vetor[cont] % 5 == 0){
			num++;					
		}
    }

    printf("\n\nTotal de %d numeros multiplos de 5",num);
    printf("\nOs numeros sao:\n\n");
	
	 for (cont = 0; cont < t; cont++){   //imprime o vetor com numeros multiplos de 5
	 	
    	if(vetor[cont] % 5 == 0){
			printf("%d | ", vetor[cont]);					
		}
		if(vetor[cont] % 3 == 0){    //soma todos os numeros multiplos de 3
			soma += vetor[cont];	
		}
    }
    
    printf("\n\nPosicoes pares do vetor\n\n");
    
    for (cont = 0; cont < t; cont++){   //imprime as posicoes pares do vetor
	 	
    	if(cont % 2 == 0){
			printf("%d | ", vetor[cont]);					
		}
    }
    
     for (cont = 0; cont < t; cont++){   //troca as posicoes impares pela soma dos multiplos de 3
	 	
    	if(cont % 2 != 0){
			vetor[cont] = soma;				
		}
    }
    printf("\n\n");
    
     for (cont = 0; cont < t; cont++){   //imprime o vetor final
	 	
   	    printf("%d | ", vetor[cont]);
    }
    
    
    
	
    

    return 0;
}
