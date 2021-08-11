#include <stdio.h>

int main()
{ 
  float num, fnumdec, entrada, finalnumdec; 
  int numint, numdec, numintrest, num3,resultparc, parcela;
    printf("Olá usuário, o objetivo desse programa é receber o valor da mercadoria e forneçer o valor da entrada e das duas prestações\n");
    printf("\n");
    printf("Digite o valor da mercadoria: \n");
    scanf("%f", &num );

     //tranformar o valor real em inteiro
     numint = num * 100;
     //tirar os centavos
     numdec = numint % 100;
     numint = numint - numdec;
     //calcular o resto do valor sem os centavos
     numintrest = numint%3;
     numintrest = numintrest * 100;
     //tirar o resto e começar a achar a parcela
     numint = numint - numintrest;
     resultparc = numint / 3; 
     //tirando os dois zeros da parcela
     parcela = resultparc / 100;
     numintrest = numintrest / 100;
     //transformando os centavos em float
     fnumdec = numdec % 100;
     finalnumdec = fnumdec / 100;
     //adicionando os centavos ao numero inteiro
     entrada = parcela + (numintrest + finalnumdec);
     
    printf("\n");
    printf("O valor da entrada é: %f \nE as parcelas serão de: %i.", entrada, parcela); 


    return 0;
}