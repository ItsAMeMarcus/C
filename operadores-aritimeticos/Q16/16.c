#include <stdio.h>

int main()
{
 int num,q1,q2,r1,r2,r3;
 
    printf("Olá usuário!!!\n");
    printf("Esse programa tem como objetivo lhe informar um número inverso do que você nos informar\n");
    printf("Digite aqui um numero inteiro de 3 digitos: ");
    scanf("%i", &num);
    
     q1 = num/10;
     q2= q1/10;
     r1 = num%10;
     r2 = q1%10;
     r3 = q2%10;
     
    
    printf("Pois bem, o inverso de %i é: %i%i%i.\n", num, r1, r2, r3);

    return 0;
}
