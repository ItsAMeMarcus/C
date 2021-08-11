#include <stdio.h>

int main()
{
    char caractere;
    int tru;
    
    printf("insira o caractere:\n");
    scanf("%c", &caractere);
   
   
    
    //numeral
    if ((caractere >= '0')&&(caractere <= '9')) {
        
        printf("o caractere é um numero. \n");
        
    }
 
    //letra maior 
     else 
      if ((caractere >= 'A')&&(caractere <= 'Z')) {
        
        printf("o caractere é ");
        
        if ((caractere == 65)||(caractere == 69)||(caractere == 73)||(caractere == 79)||(caractere == 85)){
            
            printf("uma vogal.\n"); 
            
        }
        else {
            
            printf ("uma consoante.\n");
            
        }
        
        
    }    
     
    //letra menor
     else 
      if ((caractere >= 'a')&&(caractere <= 'z')) {
        
        printf("o caractere é ");
       
        if ((caractere == 97)||(caractere == 101)||(caractere == 105)||(caractere == 111)||(caractere == 117)){
            
            printf("uma vogal.\n"); 
            
        }
        else {
            
            printf ("uma consoante.\n");
            
        }
        
    }
       
     else {
        
        printf("o caractere é um simbolo. \n");
        
    }

    printf("%d - - - %c", caractere, caractere);

    return 0;
}