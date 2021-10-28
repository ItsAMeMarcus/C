#include <stdio.h>
#include <stdlib.h>

int main (){

    int num;
    int num1;
    int num2;
    int resultado;
    char final;
    int iCont = 0;
    int jCont;
    int resultadodiv;

    for(jCont = 0; jCont < 2; jCont++){
        printf("Menu de interação \n");
        printf("0 - Sair \n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir\n");
        scanf("%d", &num);

        switch(num){
        case 1:
            for(iCont = 0; iCont < 2; iCont++){               
                printf("Insira um número:\n");
                scanf("%d", &num1);
                printf("Insira outro número:\n");
                scanf("%d", &num2);

                resultado = num1 + num2;
                    
                printf("O resultado da soma desses dois números é: %d. \n", resultado);
                puts("Deseja fazer outra soma(S/N)? \n");
                scanf(" %c",&final);

                if((final == 115)||(final == 83)){
                    iCont = 0;
                }

                else if ((final == 110)||(final == 78)){
                    puts("Voltando ao menu... \n");
                    iCont = 2;
                    jCont = 0;
                }

                else{
                    puts("Algo deu errado. Voltando ao menu... \n");
                    iCont = 2;
                }
            }
            
        break;

        case 2:
            for(iCont = 0; iCont < 2; iCont++){               
                printf("Insira um número:\n");
                scanf("%d", &num1);
                printf("Insira outro número:\n");
                scanf("%d", &num2);

                resultado = num1 - num2;
                    
                printf("O resultado da subtração desses dois números é: %d. \n", resultado);
                printf("Deseja fazer outra subtração?(S/N)? \n");
                scanf(" %c",&final); 

                if((final == 115)||(final == 83)){
                    iCont = 0;
                }

                else if ((final == 110)||(final == 78)){
                    puts("Voltando ao menu... \n");
                    iCont = 2;
                    jCont = 0;
                }

                else{
                    puts("Algo deu errado. Voltando ao menu... \n");
                    iCont = 2;
                }
            }
        
        break;

        case 3:
            for(iCont = 0; iCont < 2; iCont++){               
                printf("Insira um número:\n");
                scanf("%d", &num1);
                printf("Insira outro número:\n");
                scanf("%d", &num2);

                resultado = num1 * num2;
                    
                printf("O resultado da multiplicação desses dois números é: %d. \n", resultado);
                printf("Deseja fazer outra multiplicação?(S/N)? \n");
                scanf(" %c",&final); 

                if((final == 115)||(final == 83)){
                    iCont = 0;
                }

                else if ((final == 110)||(final == 78)){
                    puts("Voltando ao menu... \n");
                    iCont = 2;
                    jCont = 0;
                }

                else{
                    printf("Algo deu errado. Voltando ao menu... \n");
                    iCont = 2;
                }
            }
        
        break; 

        case 4:
            for(iCont = 0; iCont < 2; iCont++){               
                printf("Insira um número:\n");
                scanf("%d", &num1);
                printf("Insira outro número:\n");
                scanf("%d", &num2);

                resultado = num1 / num2;
                resultadodiv = num1 % num2;
                    
                printf("O resultado da divisão desses dois números é %d e o resto é %d. \n", resultado, resultadodiv);
                printf("Deseja fazer outra subtração?(S/N)? \n");
                scanf(" %c",&final); 

                if((final == 115)||(final == 83)){
                    iCont = 0;
                }

                else if ((final == 110)||(final == 78)){
                    puts("Voltando ao menu... \n");
                    iCont = 2;
                    jCont = 0;
                }

                else{
                    printf("Algo deu errado. Voltando ao menu... \n");
                    iCont = 2;
                }
            }
        
        break;
        
        case 0:
            puts("Fechando o programa...");
            jCont = 2;

        break;
               
        }        
    }

    return 0;
}