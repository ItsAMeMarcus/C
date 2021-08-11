#include <stdio.h>

int main()
{
    
  int soma,agencia,digito1,digito2,digito3,digito4,multdigito4,multdigito3,multdigito2,multdigito1,restodivisao,dv;
    printf("insira o numero da sua agencia: \n");
    scanf("%d",&agencia);
    
    
     //decomposição do numero da agencia
     digito1 = agencia/1000;
     digito2 = (agencia % 1000)/100;
     digito3 = (agencia % 100)/10;
     digito4 = (agencia % 10)/1;
     
     //multiplicação dos digitos
     multdigito4 = digito4 * 2;
     multdigito3 = digito3 * 3;
     multdigito2 = digito2 * 4;
     multdigito1 = digito1 * 5;
     
     //resto da divisão da soma dos numeros multiplicados divididos por 11 e dv
     soma = multdigito1 + multdigito2 + multdigito3 + multdigito4;
     restodivisao = soma % 11;
     dv = 11 - restodivisao;
     
        if (dv == 10) {
            
            printf("A sua conta é %d-X", agencia);
            
        }
        else {
            
            printf("A sua conta é %d-%d", agencia, dv);
            
        }
     

    return 0;
}