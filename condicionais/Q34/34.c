#include <stdio.h>

int main()
{
    float salario, emprestimo, maxemprestimo, maxprestacoes, prestacoes;
    int numprestacoes;
    
    printf("insira o seu salário: \n");
    scanf("%f", &salario);
    printf("\n");
    printf("insira o quanto que você quer de empréstimo: \n");
    scanf("%f", &emprestimo);
    printf("\n");
    printf("insira o numero de prestações que você deseja pagar: \n");
    scanf("%d", & numprestacoes);
    
     maxemprestimo = salario * 10;
     maxprestacoes = salario * 0.3;
     prestacoes = emprestimo/numprestacoes;
     
        if ((emprestimo <= maxemprestimo)&&(prestacoes <= maxprestacoes)) {
            
            printf("o empréstimo é viavel. \n");
            
        }  
        else {
            
            printf("o empréstimo não é viavel. \n");
            
        }

    return 0;
}