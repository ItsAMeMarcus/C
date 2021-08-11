#include <stdio.h>

int main()
{
  int num;
  
   printf("insira um número\n");
   scanf("%d", &num);
   
    if (num < 0){
        
        num = num * -1;
        
        printf("o modulo desse número é: %d.\n", num);
        
    }
    else{
        
    printf("o modulo desse número é: %d.\n", num);    
        
    }

    return 0;
}