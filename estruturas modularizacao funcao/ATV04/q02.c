#include <stdio.h>

int FuncaoSubtracao(int num1, int num2, int num3){

    int resultado;
    resultado = num1 - num2 - num3;
    return resultado;

}

int main(){

    int x;
    int y;
    int z;
    int subtracao;

    printf("Insira um número:\n");
    scanf("%d", &x);
    printf("Insira outro número:\n");
    scanf("%d", &y);
    printf("Insira mais um número:\n");
    scanf("%d", &z);

    subtracao = FuncaoSubtracao(x,y,z);

    printf("A subtração dos dois números é: %d\n", subtracao);


    return 0;

}