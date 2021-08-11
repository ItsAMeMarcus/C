#include <stdio.h>

int main()
{
    float pi = 3.14;
    float raio;
    float area;
    float perim;
    
    printf ("Calculadora de área e perímetro de circunferências!! \n")
    printf ("Insira o raio da circunferência: \n");
    scanf ("%f", &raio);
    
     area = pi * (raio * raio);
     perim = 2 * pi * raio;
    printf("Eis os resultados! A sua área é = %f \n", area);
    printf ("E o seu perimetro é = %f \n", perim);

    return 0;
}

