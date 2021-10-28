#include <stdio.h>

int main()
{
    
    int resto = 1,soma = 0,num;
    int dividendo = 1;
    
    
    
    printf("Insira um numero: \n");
    scanf("%d", &num);
    
    do{
        
        resto = num % dividendo;
         if (resto == 0){
             
             soma = soma + dividendo;
         }
        dividendo++;
        
    }while(dividendo < num);
    
    if (soma == num){
        
        printf("é um numero perfeito \n");
        
    }
    
    else {
        
       printf("não é um numero perfeito \n"); 
        
    } 

    return 0;
}

