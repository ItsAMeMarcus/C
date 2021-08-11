
#include <stdio.h>

int main()
{
    
 float fah;
 float cels;
    
    printf ("Olá Usuário!\n");
    printf ("Esse programa tem como finalidade converter temperaturas de Fahrenheit para Celsius.\n");
    printf ("\n");
    printf ("Por favor, insira aqui a temperatura em Fahrenheit: \n");
    scanf ("%f", &fah);
    
    cels = (fah - 32) * 5/9;
    
    printf ("Conversão pronta! O resultado é: %f !\n ", cels);
    
    
    return 0;
}

