#include <stdio.h>

int main()
{ 
  int num;
  
    printf("insira o mês: \n");
    scanf("%d", &num);
    
    if ((num == 1)||(num == 3)||(num == 5)||(num == 7)||(num == 8)||(num == 10)||(num == 12)){
        
        printf("esse mês tem 31 dias. \n");
        
    }
    
    if ((num == 4)||(num == 6)||(num == 9)||(num == 11)){
        
        printf("esse mês tem 30 dias\n");
        
    }
    
    if (num == 2) {
        
        printf("esse mêss tem 27 dias e de quatro em quatro anos tem 28. \n");
        
    }
    
    if ((num >12)||(num < 1)) {
        
        printf("esse numero é invalido\n");
        
    }
    

    return 0;
}