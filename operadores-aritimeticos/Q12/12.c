#include <stdio.h>

int main()
{
    float ms,kmh;
    
    printf("Olá usuário!!\n");
    printf("Esse programa tem como objetivo converter uma medida de metros por segundo\n");
    printf("(m/s) para kilometros por hora (km/h).\n");
    printf("Por favor, insira aqui a sua medida em m/s: \n");
    scanf ("%f", &ms);
     
     kmh = ms * 3.6;
     
    printf("Essa medida em km/h é: %f.\n", kmh); 

    return 0;
}

