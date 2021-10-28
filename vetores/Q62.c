#include <stdio.h>

int main()
{
    int i,array[10], par = 0, contador = 0;
    
    printf("Insira 10 numeros inteiros: \n");
    
     for(i = 0; i < 10; i++){
     
      scanf("%d",&array[i]);
      
      par = array[i]%2;
      
      if(par == 0){
         
          contador++;
          
        }
        
     }
    
    if(contador > 0){
        
    printf("Esta é a quantidade de numeros pares:%d \n", contador);
    
    }
    
    else{
        
    printf("Não existem numeros pares. \n");
    
    }

    return 0;
}
