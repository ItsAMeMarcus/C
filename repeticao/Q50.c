 #include <stdio.h>

int main()
{
    
   int num,dado,resultado;
   int dado1;
   int dado2;
   int soma;
   
    printf("informe um numero entre 1 e 12: \n");
    scanf("%d",&num);
    
    for (dado1 = 1; dado1 <= 6; dado1++){
        for (dado2 = 1; dado2 <=6; dado2++){
            if((dado2+dado1) == num){
                
                printf("%d - %d\n", dado1,dado2);
                
            }
        }
        
    }
    
     
    return 0;
}
