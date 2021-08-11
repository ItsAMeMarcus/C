#include <stdio.h>

int main()
{
    puts("Insira o valor adjunto de X:");
    scanf("%d", &numCima);
    puts("Insira o valor do outro lado da equação: ");
    scanf("%d", numBaixo);
    
    X = numCima/numBaixo;
    
    printf("resultado: %d", X);

    return 0;
}

