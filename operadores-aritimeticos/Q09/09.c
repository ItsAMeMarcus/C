#include <stdio.h>

int main()
{
  float raio;
  float pi = 3.14;
  float high;
  float volume;
  
   printf ("Olá usuário!\n");
   printf ("Esse programa tem como finalidade o cálculo do volume de uma lata de óleo. \n");
   printf ("\n");
   printf ("Insira respectivamente os valores do raio e da altura da lata: \n");
   scanf ("%f %f", &raio, &high);
    
    volume = (raio * raio) * pi * high;
    
   printf ("O volume da lata é: %f. \n", volume);  
    
   
    return 0;
}

