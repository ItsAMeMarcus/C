#include <stdio.h>

int main()
{
    
    int termo;
    int iCont = 2;
    int resultado1 = 1;
    int resultado2 = 1;
    
    printf("Insira o termo da sequência de Fibonacci: \n");
    scanf("%d",&termo);
    
     if (termo <= 2){
         
         switch(termo){
             
             case 2: printf("\n%d",resultado2);
             case 1: printf("\n%d\n",resultado1);
             break;
             
         }
         
     }
     else{
         
         printf("\n");
         printf("%d\n",resultado1);
         printf("%d\n",resultado2);
         
         while(iCont < termo){
             
             resultado1 = resultado1+resultado2;
             printf("%d\n",resultado1);
             iCont++;
             if (iCont == termo){
                 
                 return 0;
                 
             }
             else {
                 resultado2 = resultado1+resultado2;
                 printf("%d\n",resultado2);
                 iCont++; 
                 
                 
             } 
         }
     }
    
    
    return 0;
}
