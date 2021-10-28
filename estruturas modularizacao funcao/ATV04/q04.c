#include <stdio.h>
#define TAM_ARRAY 3

int ler3Numeros(int vetor[]){
    int i;

    for(i = 0; i < TAM_ARRAY; i++) {
        printf("Insira o %d° numero\n",i + 1);
        scanf("%d",&vetor[i]);
    }
}

int main(){
    int array[TAM_ARRAY];
    int i;

    ler3Numeros(array);

    puts("-------------------------------------------------------------------------------------------------");


    for(i = 0; i < TAM_ARRAY; i++){
        printf("%d° numero: %d \n",i + 1,array[i]);
    }

    return 0;
} 