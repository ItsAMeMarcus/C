#include <stdio.h>
#define DIA 30

int main()
{
   int mes[DIA] = {22,35,64,165,2,15,4,952,6,357,1,21,11,4,45,6,95,63,9,30,25,22,64,58,21,10,3,45,32,36};
   int i;
   int valorMax = 0;
   int valorMin;
   int soma1 = 0;
   int soma2 = 0;
   int media1;
   int media2;
   int posicao = 0;
   int posicao2 = 0;
   
   for(i = 0; i < DIA; i++){
       
       if(mes[i] > valorMax){
           
           valorMax = mes[i];
           posicao = i;
       }
   }
   
   valorMin = valorMax;
   
    for(i = 0; i < DIA; i++){
       
       if((mes[i] < mes[i - 1])&&(mes[i] < valorMin)){
           
           valorMin = mes[i];
           posicao2 = i;
       }
   }
    
   for(i = 0; i <= 15; i++){
       
        soma1 = soma1 + mes[i];
   }
   
   media1 = soma1/15;
   
   for(i = 16; i < 30; i++){
       
        soma2 = soma2 + mes[i];
   }
    
    media2 = soma2/15;
    
    printf("**********Indice pluviométrico de Junho**********\n");
    printf("\n");
    printf("Dia que mais choveu: %d",posicao + 1);
    printf("\n");
    printf("Dia que menos choveu: %d",posicao2 + 1);
    printf("\n");
    printf("Média da primeira quinzena: Aproximadamente %d",media1);
    printf("\n");
    printf("Média da segunda quinzena: Aproximadamente %d",media2);
    printf("\n");
    

    return 0;
}

