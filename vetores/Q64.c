#include <stdio.h>
#define TAM_ARRAY 20

int main()
{
    int array[TAM_ARRAY] = {20,19,18,17,16,15,144,13,12,111,10,19,118,7,6,55,4,33,258,1};
    int i;
    int MaiorNumero = array[0];
    int MenorNumero = array[0];
    
    for(i = 1; i < 20; i++){
        
        if ((array[i] > array[i - 1])&&(array[i] > MaiorNumero)){
            
            MaiorNumero = array[i];
        }
        
        if ((array[i] < array[i - 1])&&(array[i] < MenorNumero)){
            
            MenorNumero = array[i];
        }
    }
    
    
    printf("o maior numero é %d e o menor é %d. \n", MaiorNumero,MenorNumero);

    return 0;
}

