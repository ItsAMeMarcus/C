#include <stdio.h>
#define TAM_ARRAY 15

int main()
{
    char texto[TAM_ARRAY] = {"microcomputador"};
    int i;
    char caractere;
    int iCount;
    
    puts("Insira um caractere: ");
    scanf("%c",&caractere);
    
    for(i = 0;i<TAM_ARRAY;i++){
        
        if(texto[i] == caractere){
            
            iCount++;
        }
        
    }
    
    printf("%c aparece %d vez(es)\n", caractere, iCount);

    return 0;
}
