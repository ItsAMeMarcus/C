#include <stdio.h>

int main()
{
    
    int resto1 = 1,soma1 = 0,num1;
    int dividendo1 = 1;
    int resto2 = 1,soma2 = 0,num2;
    int dividendo2 = 1;
    
    
    printf("Insira dois numeros: \n");
    scanf("%d%d", &num1,&num2);
    
    do{
        
        resto1 = num1 % dividendo1;
         if (resto1 == 0){
             
             soma1 = soma1 + dividendo1;
         }
        dividendo1++;
        
    }while(dividendo1 < num1);
    
    do{
        
        resto2 = num2 % dividendo2;
         if (resto2 == 0){
             
             soma2 = soma2 + dividendo2;
         }
         dividendo2++;
         
    }while(dividendo2 < num2);
    
    if ((soma1 == num2)&&(soma2 == num1)){
        
        printf("são numeros amigos :) \n");
        
    }
    
    else {
        
       printf("não são numeros amigos :( \n"); 
        
    } 

    return 0;
}

