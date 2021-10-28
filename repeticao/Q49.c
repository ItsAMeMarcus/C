#include <stdio.h>

int main()
{
   int num,resto;
   int divisor = 1; 
    
    printf("Insira um número: ");
    scanf("%d",&num);
    
   if (num <= 1){
        
        printf("Esse número não é primo! \n");
    }
    else{
        
        resto = num;
        
        while (resto > 0){
            
            divisor++;
            resto = num % divisor;
         
        }
        
        if (divisor != num){
                
                
                
            
            }
        else {
                
                printf("Esse número é primo!\n");
                
            }
        
    }

    return 0;
}
