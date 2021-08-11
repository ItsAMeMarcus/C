#include <stdio.h>

int main()
{
  int num, result;
  
   printf("insira um numero: \n");
   scanf("%d", &num);
   
   result = num %2;
   
    if (result > 0){
        
        printf("o numero é impar. \n");
        
    }
    
    else {
        
        printf("o numero é par.\n");
        
    }

    return 0;
}