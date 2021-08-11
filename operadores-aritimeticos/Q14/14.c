#include <stdio.h>

int main()
{
 float t1,t2,total,v,a,s;
 
    printf("Olá usuário!!: \n");
    printf("Esse programa tem como objetivo sincronizar os semáforos de uma cidade.\n");
    printf("Para isso, é necessário que você informe a velocidade maxima da via, a aceleração do carro e a distancia entre os semáforos.\n");
    printf("Por isso, por favor, informe os valores citados anteriormente naquela ordem e em metros aqui: \n");
    scanf("%f%f%f",&v,&a,&s);
     
     t1 = v/a;
     t2 = (s/(v/2));
     total = t1 + t2;
    
    printf ("\n"); 
    printf ("De acordo com as informações adquiridas, os semáforos devem abrir com exatos %fs de diferença.", total); 

    return 0;
}
