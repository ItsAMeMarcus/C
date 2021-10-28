#include <stdio.h>
#define TAM_ARRAY 50

char ler3Palavras(char palavra[]){
    static int i = 1;

    printf("Insira a %d° palavra\n",i);
    fgets (palavra, TAM_ARRAY, stdin);       
    i++; 
}

int main(){
    char palavra1[TAM_ARRAY];
    char palavra2[TAM_ARRAY];
    char palavra3[TAM_ARRAY];
    int i;

    ler3Palavras(palavra1);
    ler3Palavras(palavra2);
    ler3Palavras(palavra3);

    puts("-------------------------------------------------------------------------------------------------");


    printf("1ª palavra: %s \n",palavra1);
    
    printf("2ª palavra: %s \n",palavra2);
    
    printf("3ª palavra: %s \n",palavra3);


    return 0;
} 