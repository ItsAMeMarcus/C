#include <stdio.h>
#define TAM_ARRAY 15

int main()
{
    int array[TAM_ARRAY] = {1,2,33,62,57,95,41,2,33,2,3,2,1,33,62};
    int i;
    int num;
    int iCount;
    
    printf("Insira um número: \n");
    scanf("%d",&num);
    
    for(i = 0;i<TAM_ARRAY;i++){
        
        if(array[i] == num){
            
            iCount++;
        }
        
    }
    
    printf("%d aparece %d vez(es)\n", num, iCount);

    return 0;
}

