#include <stdio.h>

int main () {
    
    float lado;
    float area;
    float perimetro; 
    
    printf ("Olá, seja bem vindo a calculadora de área e perímetro de quadrados!!\n");
    printf ("\n");
    printf ("Insira aqui o lado do seu quadrado: \n");
    scanf ("%f", &lado);
    printf ("\n");
    
    
     area = lado * lado;
     perimetro = lado * 4;
     
    printf ("\n");
    printf ("Aqui estão os resultados: \n");
    printf ("A área do quadrado é: %f \n", area);
    printf ("E o perímetro é: %f \n", perimetro);
    
    return 0;
}

