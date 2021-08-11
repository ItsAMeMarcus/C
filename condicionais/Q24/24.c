#include <stdio.h>

int main()
{ 
  int x,y,z,resultado;
  
    printf("insira 3 numeros: \n");
    scanf("%d%d%d", &x,&y,&z);
    
    if ((x > y)&&(x > z)){
        
        printf("o maior numero é: %d \n", x);
        
    }
    
   if ((y > x)&&(y > z)){
        
        printf("o maior numero é: %d \n", y);
        
    }
    
    if ((z > y)&&(z > x)){
        
        printf("o maior numero é: %d \n", z);
        
    }
    
    if ((x == y)&&(x == z)){
        
        printf("os 3 numeros são iguais \n");
        
    }
    
    return 0;
}