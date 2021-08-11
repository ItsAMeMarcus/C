#include <stdio.h>

int main()
{
  char letra;  
    
    
    printf("insira uma letra do alfabeto da lingua brasileira\n");
    scanf("%c", & letra);
    
    if (letra == 'a'){
        
        printf("essa letra é uma vogal. \n");
        
    }
    
    else if (letra == 'e'){
        
        printf("essa letra é uma vogal. \n");
        
    }
    
    else if (letra == 'i'){
        
        printf("essa letra é uma vogal. \n");
        
    }
    
    else if (letra == 'o'){
        
        printf("essa letra é uma vogal. \n");
        
    }
    
    else if (letra == 'u'){
        
        printf("essa letra é uma vogal. \n");
        
    }
    
    else {
        
        printf("essa letra é uma consoante. \n");
        
    }

    return 0;
}