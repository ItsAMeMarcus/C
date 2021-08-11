#include <stdio.h>

int main()
{
    
  float numl,numdin,desc,total,desctotal;
  char combustivel;
  
  
    printf("insira o combustivel, sendo g gasolina e a alcool:\n");
    scanf("%c", &combustivel);
    printf("insira quantos litros foram comprados \n");
    scanf("%f", &numl);
    
 

     // se o combustivel for gasolina
     
      if (combustivel == 'g') {
         
         numdin = numl * 2.7;
         
         //se numdin for maior que 25
         
         if (numdin > 25){
             
             desc = numl * 0.05;
             
             desctotal = numdin * desc;
             
             total = numdin - desctotal;
             
             printf("a sua conta deu: %f.\n", total);
             
         }
         
         //se não:
         
         else if (numdin < 25){
             
             desc = numl * 0.03;
             
             desctotal = numdin * desc;
             
             total = numdin - desctotal;
             
             printf("a sua conta deu: %f.\n", total);
             
         }  
         
     }
     
     //se o combustivel for alcool
     
      else if (combustivel == 'a') {
         
         numdin = numl * 1.90;
         
         //se numdin for maior de 25
         
         if (numdin > 25){
             
             desc = numl * 0.04;
             
             desctotal = numdin * desc;
             
             total = numdin - desctotal;
             
             printf("a sua conta deu: %f.\n", total);
             
         }
         //se não:
         
         else if (numdin < 25){
             
             desc = numl * 0.02;
             
             desctotal = numdin * desc;
             
             total = numdin - desctotal;
             
             printf("a sua conta deu: %f.\n", total);
             
         }  
         
     }
     

    return 0;
}