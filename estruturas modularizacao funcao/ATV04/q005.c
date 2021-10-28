#include <stdio.h>
#include <stdlib.h>
#define TAM_ARRAY 4

typedef struct{

    int vetorNumeros[TAM_ARRAY];

}questao05;

questao05 ler4Numeros();

int main(){

    int i;
    questao05 teste;    
    teste = ler4Numeros();

    puts("---------------------------------------------------------------");
    for(i = 0; i < TAM_ARRAY; i++){
        printf("%i\n", teste.vetorNumeros[i]);
    }
    
    



    return 0;
}

questao05 ler4Numeros(){

    questao05 numeros;
    int i;

    for(i = 0; i < TAM_ARRAY; i++){
        puts("insira um numero: ");    
        scanf("%d", &numeros.vetorNumeros[i]);
    }
    


    return numeros;
}

