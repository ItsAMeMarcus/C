#include <stdio.h>

int main()
{
  int ano, bissexto1, bissexto2, bissexto3;    
    
    printf("insira um ano: \n");
    scanf("%d", &ano);
    
     bissexto1 = ano % 4;
     bissexto2 = ano % 100;
     bissexto3 = ano % 400;
    
             if (bissexto3 == 0) {
            
            printf ("Esse ano é bissexto \n");
        }
        else if ((bissexto2 == 0)&&(bissexto3 > 0)) {
            
            printf ("Esse ano não é bissexto \n");
            
        } 
        else if (bissexto1 == 0) {
            
            printf ("Esse ano é bissexto \n");
            
        }
        else {
            
            printf ("esse ano não é bissexto \n");
            
        }
        
        printf ("%d  %d \n", bissexto1, bissexto3);

    return 0;
}