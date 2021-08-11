#include <stdio.h>

int main()
{
  float acres,resultado,acresdesc,acreresultado,resultadodesc,total;
  int pulverizacao;
    
    
    printf("insira o tamanho da area em acres: \n");
    scanf("%f", &acres);
    printf("insira qual o tipo de pulverização: \n");
    scanf("%d", &pulverizacao);
    
         if (pulverizacao == 1) {
        
        resultado = acres * 50;
        
             if ((resultado > 750)&&(acres > 1000)){
            
            acresdesc = resultado * 0.05;
            acreresultado = resultado - acresdesc;
            resultadodesc = (acreresultado - 750) * 0.10;
            total = acreresultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else if ((resultado > 750)&&(acres < 1000)){
            
            resultadodesc = (resultado - 750) * 0.10;
            total = resultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else {
            
            printf("O valor a pagar é: %f", resultado);
            
        }
        
        
    }
    else if (pulverizacao == 2) {
        
        resultado = acres * 100;
        
             if ((resultado > 750)&&(acres > 1000)){
            
            acresdesc = resultado * 0.05;
            acreresultado = resultado - acresdesc;
            resultadodesc = (acreresultado - 750) * 0.10;
            total = acreresultado - resultadodesc;
            printf("O valor a pagar é: %ff", total);
            
        }
        else if ((resultado > 750)&&(acres < 1000)){
            
            resultadodesc = (resultado - 750) * 0.10;
            total = resultado - resultadodesc;
            printf("O valor a pagar é: %ff", total);
            
        }
        else {
            
            printf("O valor a pagar é: %ff", resultado);
            
        }
        
        
    }
    else if (pulverizacao == 3) {
        
        resultado = acres * 150;
        
             if ((resultado > 750)&&(acres > 1000)){
            
            acresdesc = resultado * 0.05;
            acreresultado = resultado - acresdesc;
            resultadodesc = (acreresultado - 750) * 0.10;
            total = acreresultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else if ((resultado > 750)&&(acres < 1000)){
            
            resultadodesc = (resultado - 750) * 0.10;
            total = resultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else {
            
            printf("O valor a pagar é: %f", resultado);
            
        }
        
        
    }
    else if (pulverizacao == 4) {
        
        resultado = acres * 250;
        
             if ((resultado > 750)&&(acres > 1000)){
            
            acresdesc = resultado * 0.05;
            acreresultado = resultado - acresdesc;
            resultadodesc = (acreresultado - 750) * 0.10;
            total = acreresultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else if ((resultado > 750)&&(acres < 1000)){
            
            resultadodesc = (resultado - 750) * 0.10;
            total = resultado - resultadodesc;
            printf("O valor a pagar é: %f", total);
            
        }
        else {
            
            printf("O valor a pagar é: %f", resultado);
            
        }
        
        
    }
    else {
        
        printf("algo deu errado, tente novamente. \n");
        
    }

    return 0;
}