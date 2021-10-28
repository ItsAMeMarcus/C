#include <stdio.h>

int FuncaoSoma(int num1, int num2){

    int resultado;
    resultado = num1 + num2;
    return resultado;

}

int main(){

    int x;
    int y;
    int soma;

    printf("Insira um número:\n");
    scanf("%d", &x);
    printf("Insira outro número:\n");
    scanf("%d", &y);

    soma = FuncaoSoma(x,y);

    printf("A soma dos dois números é: %d\n", soma);


    return 0;

}