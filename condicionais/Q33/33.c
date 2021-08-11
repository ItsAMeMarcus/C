#include <stdio.h>

int main()
{
    
  int X,Y;
  
    printf("insira X e Y da coordenada: \n");
    scanf ("%d%d", &X,&Y);
    printf ("\n");
    
         if ((X > 0)&&(Y > 0)) {
        
        printf("a coordenada está no 1° quadrante. \n");
        
    }
    else if ((X > 0)&&(Y < 0)) {
        
        printf("a coordenada está no 2° quadrante. \n");
        
    }
    else if ((X < 0)&&(Y < 0)) {
        
        printf("a coordenada está no 3° quadrante. \n");
        
    }
    else if ((X < 0)&&(Y > 0)) {
        
        printf("a coordenada está no 4° quadrante. \n");
        
    }
    else if ((X == 0)&&(Y == 0)) {
        
        printf("a coordenada está na origem. \n");
        
    }
    else if ((X == 0)||(Y == 0)) {
        
        printf("a coordenada está sobre um dos eixos . \n");
        
    }
    else {
        
        printf("algo deu errado, tente novamente.\n");
        
    }
    
    
    return 0;
}