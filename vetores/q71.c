#include <stdio.h>
#define TAM_ARRAY 10

int main()
{
    int array[TAM_ARRAY] = {6,32,45,12,99,45,65,12,71,6};
    int i;
    int num;
    int posicao = -1;
    int iCount = 0;
    
   printf("Insira um numero: \n");
   scanf("%d",&num);
   
   
    for(i = 0; i<TAM_ARRAY;i++){
        
        if(array[i] == num){
            
            posicao = i;
            break;
        }
    }
    

    printf("o numero %d aparece na %d° posicao.", num,posicao);
    
    

    return 0;
}

