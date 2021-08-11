#include <stdio.h>

int main()
{
    
 float lado, perim;
 
    printf ("Calculadora de perímetro de triângulos!! \n"); 
    printf ("Insira os lados do triângulo: \n");
    scanf ("%f", &lado);
    printf ("\n");
     perim = lado * 3;
    printf ("Aqui está o resultado!! O perímetro é = %f \n", perim); 
    
    

    return 0;
}

