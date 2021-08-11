#include <stdio.h>

int main()
{
    float rparalelo, rtotal, r1, r2, r3;
    
    printf ("Olá usuário!! \n");
    printf ("Esse programa tem como objetivo calcular associação de resistores mista\n");
    printf ("Insira aqui os valores dos resistores: \n");
    scanf ("%f %f %f", &r1, &r2, &r3);
    
     rparalelo = (1/r1) + (1/r2);
     rparalelo = 1/rparalelo;
     rtotal = rparalelo + r3;
     
   printf ("A resposta é: %f \n", rtotal);
    return 0;
}