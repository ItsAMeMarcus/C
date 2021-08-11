#include <stdio.h>

int main () {
    
    float base;
    float altura;
    float area;
    float perimetro; 
    
    printf ("Olá, seja bem vindo a calculadora de área e perímetro de retângulos!!\n");
    printf ("\n");
    printf ("Insira aqui a base do seu retângulo: \n");
    scanf ("%f", &base);
    printf ("\n");
    printf ("Ótimo! Insira agora a altura do seu retângulo: \n");
    scanf ("%f", &altura);
    
     area = base * altura;
     perimetro = (base * 2) + (altura * 2);
     
    printf ("\n");
    printf ("Aqui estão os resultados: \n");
    printf ("A área do retângulo é: %f \n", area);
    printf ("E o perímetro é: %f \n", perimetro);
    
    return 0;
}
