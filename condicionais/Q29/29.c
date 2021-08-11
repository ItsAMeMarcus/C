#include <stdio.h>

int main()
{
    
    
  float salario,desconto;
  
  
    printf("insira o valor do seu salário: \n");
    scanf("%f", &salario);
    
    desconto = salario * 0.11;
    
    if (desconto > 334.29) {
        
        
        printf("o seu desconto é de 334.29. \n");
        
    }
    
    else {
        
        
        printf("seu desconto é de %f. \n", desconto);
        
    }
    

    return 0;
}