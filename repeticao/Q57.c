#include <stdio.h>

int main()
{
    int iCont = 0;
    int x = 1;
    int NumeroN,base;
    float soma = 0 ,NumeroS,x1;
    
    printf("insira um numero: \n");
    scanf("%d", &NumeroN);
    
    for (base = 2; base <= NumeroN; base++){
      printf("%d - base \n", base);  
      do{
          
          x = x * base;
          iCont++;
          printf("%d - baseDO \n", base);
      }while (iCont < base);
      
      iCont = 0;
      
      printf("%d - x \n",x);
      x1 = (1.0/x);
      printf("%f - x1 \n",x1);
      soma = soma + x1;
      printf("%f - soma \n", soma);
      
      x = 1;
    }
    
    NumeroS = 1 + soma;
    
    printf("o Numero S é igual a: %f \n", NumeroS);
    

    return 0;
}
