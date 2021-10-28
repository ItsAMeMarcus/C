#include <stdio.h>
#define TAM_ARRAY 10

int main()
{
    int array[TAM_ARRAY] = {1,2,3,4,5,6,7,8,9,10};
    int elemento;
    int inicio = 0;
    int final = TAM_ARRAY;
    int meio;
    int posicao = -1;
    
    puts("Insira o elemento: ");
    scanf("%d",&elemento);
    
    while(inicio <= final && posicao == -1){
      
      meio = ((final - inicio)/2 + inicio);
      if (elemento == array[meio]){
          
          posicao = meio;
      }
      else if(elemento > array[meio]){
          
          final = meio - 1;
      }
      else{
          
        inicio = meio + 1;  
      }
    }
    
    printf("%d aparece na %d° posição.\n", elemento, posicao);

    return 0;
}
