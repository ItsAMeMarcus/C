#include <stdio.h>
#define TAM_ARRAY 10


int main()
{
    int i;
    int array[TAM_ARRAY] = {5,1,54,2,86,3,4,27,9,55};
    int arrayb[TAM_ARRAY] = {4,97,8,32,16,4,62,2,31,4};
    int arrayc[TAM_ARRAY] = {95,2,24,5,87,6,31,4,55,10};
    int ValorMax1 = 0,ValorMax2 = 0,ValorMin1 = 0,ValorMin2 = 0;
    int Posicao1 = 0,Posicao2 = 0;
    
    for(i = 0; i<TAM_ARRAY; i++){
        
       if((array[i] > array[i - 1])&&(array[i] > ValorMax1)){
           
           ValorMax1 = array[i];
           Posicao1 = i;
       }
       
    }
    
    for(i = 0; i<TAM_ARRAY; i++){
        
       if((arrayb[i] > arrayb[i - 1])&&(arrayb[i] > ValorMax2)){
           
           ValorMax2 = arrayb[i];
           Posicao2 = i;
       }
       
    }
    
    arrayc[Posicao1] = array[Posicao1];
    arrayc[Posicao2] = arrayb[Posicao2];
    
    for(i = 0; i<TAM_ARRAY; i++){
        
       printf("%d - ", arrayc[i]);
    }

    return 0;
}

