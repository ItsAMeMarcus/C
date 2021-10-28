#include <stdio.h>
#define TAM_STRING 6

int main()
{
    
    char texto[TAM_STRING] = {'m','a','r','c','u','s'};
    int i;
    int iCount;
    
    for(i = 0; i < TAM_STRING; i++){
        
        if((texto[i] == 65)||(texto[i] == 69)||(texto[i] == 73)||(texto[i] == 79)||(texto[i] == 85)||(texto[i] == 97)||(texto[i] == 101)||(texto[i] == 105)||(texto[i] == 111)||(texto[i] == 117)){
            
            iCount++;
        }
    }
    
    
    printf("O numero de vogais é %d.", iCount);

    return 0;
}
