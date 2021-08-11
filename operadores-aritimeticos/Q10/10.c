#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,r1,r2,r3,r4,r5,numresul;
    
    printf("Olá usuário!!\n");
    printf ("Esse programa tem a finalidade de números decimais menores que 32 em binários\n");
    printf ("\n");
    printf ("Insira aqui o seu número decimal: \n");
    scanf ("%i", &n1);
    
     n2 = n1/2;
     n3 = n2/2;
     n4 = n3/2;
     r1 = n1%2;
     r2 = n2%2;
     r3 = n3%2;
     r4 = n4%2;
     r5 = n4/2;
     
     numresul = r5 * 10000 + r4 * 1000 + r3 * 100 + r2 * 10 * r1 * 1;
     
    printf ("%i em binário é: %d \n", n1,numresul);
    
    return 0;
}
