#include <stdio.h>
#define TAM_STRING 256

int main()
{
    
    char texto[TAM_STRING] ={"roma e amor"};
    char texto2[TAM_STRING] = {};
    int i;
    int j;
    int NumCaractere = -1;
    
    
    for(i = 0; i < TAM_STRING; i++){
        
        if(texto[i] != 0){
            
            NumCaractere++;
           
        }
    }
    
    
    
    do{
        for(j = 0; NumCaractere + 1 > 0; j++){
            
            texto2[j] = texto[NumCaractere];
            NumCaractere--;
        }
    }while(NumCaractere == 0);
    
    printf("%s\n\n", texto);
    printf("%s", texto2);

    return 0;
}
