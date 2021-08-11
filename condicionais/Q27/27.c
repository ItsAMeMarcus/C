#include <stdio.h>

int main()
{
  int x,y,z;
  float dividendo,divisor,resultado;
    
    
    printf("insira 3 numeros que não sejam iguais: \n");
    scanf("%d%d%d", &x,&y,&z);
    
    if ((z > x)&&(z > y)){
       
       dividendo = (z*5) + (x*2.5) + (y*2.5);
       divisor  = 5 + 2.5 + 2.5;
       resultado = dividendo/divisor;
        
        printf("a média ponderada desses numeros é: %f \n", resultado);
        
    }
    
    if ((y > x)&&(y > x)){
       
       dividendo = (y*5) + (x*2.5) + (z*2.5);
       divisor  = 5 + 2.5 + 2.5;
       resultado = dividendo/divisor;
        
        printf("a média ponderada desses numeros é: %f \n", resultado);
        
    }
    
    if ((x > z)&&(x > y)){
       
       dividendo = (x*5) + (z*2.5) + (y*2.5);
       divisor  = 5 + 2.5 + 2.5;
       resultado = dividendo/divisor;
        
        printf("a média ponderada desses numeros é: %f \n", resultado);
        
    }

    if ((z == x)&&(z == y)){
       
        printf("o pré requisito de 3 numeros que não sejam iguais não foi comprido. \n");
        
    }

    return 0;
}