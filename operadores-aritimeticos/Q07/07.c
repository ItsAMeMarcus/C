#include <stdio.h>

int main()
{
    int anos;
    int mes;
    int dia;
    int anobi;
    
    
    printf("Olá usuario!! Por favor insira aqui quantos dias de idade você tem: \n");
    scanf ("%i", &dia);
    
    
    mes = dia / 60;
    anos = dia / 365;
    
    printf ("Pois bem, usuario tem %i dias de idade, %i meses de idade e %i anos de idade \n",dia, mes, anos);

    return 0;
}

