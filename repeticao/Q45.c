#include <stdio.h>

int main (){

 int N1,N2,N3,N4,N5, Divisor;
 int Dividendo = 5;
 float Media;
 
    printf("Insira 5 numeros: \n");
    scanf("%d%d%d%d%d",&N1,&N2,&N3,&N4,&N5);

    Divisor = N1+N2+N3+N4+N5;
    Media = Divisor / Dividendo;

    printf("A media desses numeros e: %f \n", Media);

    
        
    return 0;
}