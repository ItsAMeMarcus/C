#include <stdio.h>
#define TAM_ARRAY 15

int main()
{
    
    int array[TAM_ARRAY] = {3,13,1,8,7,2,10,14,6,9,5,12,0,4,15};
    int i;
    int j;
    int iCount;
    int aux = 0;
    
    for(j = 0;j < TAM_ARRAY; j++){
      for(i = 0;i < TAM_ARRAY - 1; i++){
          
          if(array[i + 1] < array[i]){
              
              aux = array[i];
              array[i] = array[i + 1];
              array[i + 1] = aux;
          }
      }
    }
    
    for(i = 0; i < TAM_ARRAY; i++){
      printf("%d - ", array[i]);
    }

    return 0;
}

