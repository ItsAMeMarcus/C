#include <stdio.h>
#define TAM_ARRAY 16

int main()
{
    int array[TAM_ARRAY] = {2,30,1,21,5,4,5,3,30,2,99,7,84,5,32,6};
    int i;
    int num;
    int elemento;
    int posicao;
    
    
    
    puts("1°: insira um elemento no final do vetor: ");
    scanf("%d", &num);
    
    array[15] = num;
    
    for(i = 0; i < TAM_ARRAY; i++){
    
     printf("%d - ",array[i]);
     
    }
    
    printf("\n\n2°: insira um elemento em uma dada posição\n");
    puts("insira um elemento: ");
    scanf("%d", &elemento);
    puts("insira uma posição: ");
    scanf("%d",&posicao);
    
    array[posicao] = elemento;
    
    for(i = 0; i < TAM_ARRAY; i++){
    
     printf("%d - ",array[i]);
     
    }
    
    printf("\n\n3°: Remova um elemento de uma posição indicada\n");
    puts("insira uma posição: ");
    scanf("%d",&posicao);
    
    array[posicao] = elemento - elemento;
    
    for(i = 0; i < TAM_ARRAY; i++){
    
     printf("%d - ",array[i]);
     
    }
    
    printf("\n\n4°: Remova todos elementos iguais a um valor indicado\n");
    puts("insira um elemento: ");
    scanf("%d", &elemento);
    
    for(i = 0; i < TAM_ARRAY; i++){
    
     if(array[i] == elemento){
         
         array[i] = elemento - elemento;
     }
     
    }
    
    for(i = 0; i < TAM_ARRAY; i++){
    
     printf("%d - ",array[i]);
     
    }

    return 0;
}