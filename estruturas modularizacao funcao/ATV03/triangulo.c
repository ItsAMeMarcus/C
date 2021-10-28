#include <stdio.h>

#include "libfuncao.h"

int main(){

    int x;
    int y;
    

    printf("Calculadora de área de triângulo \nInsira a base e a altura, respectivamente:\n");
    scanf(" %d", &x);
    scanf(" %d", &y);

    int area = AreaRetangulo(x,y);
    printf("O resultado é: %d\n", area);

    return 0;
}

