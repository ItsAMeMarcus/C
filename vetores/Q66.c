#include <stdio.h>

int main()
{
    int array[10] = {10,9,8,7,6,5,4,3,2,1};
    int array2[10] = {20,19,18,17,16,15,14,13,12,11};
    int i;
    
    for(i = 0; i < 10; i++){
        
        array2[i] = array[i];
    }
    
     for(i = 0; i < 10; i++){
        
        printf("%d \n",array2[i]);
    }
    
    
    
    

    return 0;
}

