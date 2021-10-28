#include <stdio.h>

int main (){

  int divisor,dividendo,resto;
  int resultado;

    printf("Insira o Dividendo: \n");
    scanf("%d", &dividendo);
    printf("Insira o Divisor: \n");
    scanf("%d", &divisor);
     
     resto = dividendo;
     
     
     while (resto > 0){
         
          if (resto < divisor){ 
              
              printf("O resto é %d. \n",resto); 
              resto = 0;
              return 0;
          }
     
          else{
              
              resto = resto - divisor;
              resultado++; 
               
          }
     }
    printf("O resto é %d. \n",resto);
    

    return 0;
}
