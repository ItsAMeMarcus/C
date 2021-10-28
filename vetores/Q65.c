#include <stdio.h>

int main()
{
    int array[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int i;
    int MaiorNumero = array[0];
    int MenorNumero = array[0];
    int posicao = 0;
    int posicao2 = 0;
    
    for(i = 0; i < 20; i++){
        
        if (array[i] > array[i - 1]){
            if(array[i] > MaiorNumero)
            
            MaiorNumero = array[i];
            posicao = i;
        }
        
        if (array[i] < array[i - 1]){
            if(array[i] < MenorNumero){
            
            MenorNumero = array[i];
            posicao2 = i;
            }
        }
        
        
    }
    
    
    printf("o maior numero é %d na posição %d e o menor é %d na posição %d. \n", MaiorNumero,posicao,MenorNumero,posicao2);

    return 0;
}


