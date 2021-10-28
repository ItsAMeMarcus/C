#include <stdio.h>
#define TAM_ARRAY 20

int main()
{
    int Array[TAM_ARRAY] = {3,30,2,2,6,30,1,5,48,9,532,6,75,32,30,3,5,5,5,75};
    int ArrayCount[TAM_ARRAY] = {0};
    int i;
    int j;
    int Moda = ArrayCount[0];
    int Mediana = 0;
    int Media = 0;
    int Final = TAM_ARRAY - 1;
    int Inicio = 0;
    
    int Soma = 0;
    
    //Moda
     for(j = 0; j < TAM_ARRAY; j++){
         
        for(i = 0; i < TAM_ARRAY; i++){
            
            if(Array[j] == Array[i]){
                
                ArrayCount[j]++;
            }
        }
     }
     
     for(i = 1; i < TAM_ARRAY + 1; i++){
         
         if(ArrayCount[i] > ArrayCount[i - 1]){
             
             Moda = Array[i];
         }
     }
     
     //Mediana
     Mediana = ((Final - Inicio)/2 + Inicio);
     
     //Média
     for(i = 0; i < TAM_ARRAY; i++){
         
         Soma += Array[i];
     }
     
     Media = Soma/TAM_ARRAY;
    
    puts("***************************************************");
    printf("Moda: %d\n", Moda);
    printf("Mediana: %d\n", Mediana);
    printf("Média: %d\n", Media);
    
    return 0;
}
