#include <stdio.h>

int main()
{ 
   int num1,num2;
   float q,r;

    printf("Olá usuário!!!\n");
    printf("Esse programa tem como objetivo fazer uma divisão e mostrar seu resultado e  o resto.\n");
    printf("Por favor, insira aqui os números que serão divididos: \n");
    scanf("%d %d", &num1, &num2);
    
     q = num1 / num2;
     r = num1 % num2;
     
   printf("\n"); 
   printf("O resultado dessa divisão é %f e o resto é %f.\n", q, r);

    return 0;
}