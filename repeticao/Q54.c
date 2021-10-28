#include <stdio.h>

int main()
{

    int resultado,num;
    int Num1 = 1;
    int Num2 = 2;
    int Num3 = 3;
    
    printf("Informe o numero: \n");
    scanf("%d",&num);
    
    
    do{
        
        resultado = Num1 * Num2 * Num3;
        
        Num1++;
        Num2++;
        Num3++;
        
    }while(resultado < num);
    
    if (resultado == num){
        
        printf("é um numero triangular. \n");
        
    }
    else{
        
        printf("não é um numero triangular. \n");
    }
    
    return 0;
}
