#include <stdio.h>

int FuncaoFatorial(int n){

    int nFat = 0;
    int num = 1;
    int resultado = n;

    if(n <= 1){
        resultado = 1;
    }
    else if(n >= 13){
        resultado = -1;

    }     
    else{

        while(num < n){

        resultado = resultado * (n - num);
        num++;

        }
    }        

    return resultado;

}

int main(){

    int x;
    int nFat;

    printf("Insira o n!: ");
    scanf("%d", &x);

    nFat = FuncaoFatorial(x);
    if(nFat == -1){
        puts("Houve um erro, tente com um numero menor");
    }
    else{
        printf("%d! é igual a %d.\n", x, nFat);
    }
    
    return 0;

}