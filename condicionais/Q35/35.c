#include <stdio.h>

int main()
{
    int num;
    
    printf("insira um numero de 1 a 7.\n");
    scanf("%d", &num);
    
     if (num == 1) {
         
         printf("esse numero é domingo");
         
     }
     
     else if (num == 2) {
         
         printf("esse numero é segunda-feira");
         
     }
     
     else if (num == 3) {
         
         printf("esse numero é terça-feira");
         
     }
     
     else if (num == 4) {
         
         printf("esse numero é quarta-feira");
         
     }
     
     else if (num == 5) {
         
         printf("esse numero é quinta-feira");
         
     }
     
     else if (num == 6) {
         
         printf("esse numero é sexta-feira");
         
     }
     
     else if (num == 7) {
         
         printf("esse numero é sábado");
         
     }
     
     else {
         
         printf("esse numero é inválido");
         
     }

    return 0;
}