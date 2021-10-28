#include <stdio.h>
#define TAM_STRING 256

int main()
{
    char texto[TAM_STRING] = {"ha ha ha BORGES"};
    char substring[TAM_STRING] = {};
    int i;
    int j = 0;
    int comeco;
    int fim ;
    
    printf("string: %s\n", texto);
    puts("Insira o começo e o fim da substring: ");
    scanf("%d %d", &comeco, &fim);
    
    for(i = comeco;i < fim;i++){
        
        substring[j] = texto[i];
        j++;
    }
    
    printf("%s",substring);

    return 0;
}
