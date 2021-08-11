#include <stdio.h>

int main()
{ 
  int x,y,z,resultado;
  
    printf("insira 3 numeros: \n");
    scanf("%d%d%d", &x,&y,&z);
    
    if ((x < y)&&(x< z)){
        
        resultado = y + z;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    if ((y < x)&&(y < z)){
        
        resultado = x + z;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    if ((z < y)&&(z< x)){
        
        resultado = y + x;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    if ((x == y)&&(x< z)){
        
        resultado = y + z;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    if ((x < y)&&(x == z)){
        
        resultado = y + x;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    if ((y < x)&&(y == z)){
        
        resultado = y + x;
        
        printf("a soma dos dois maiores numeros é: %d \n", resultado);
        
    }
    
    return 0;
}