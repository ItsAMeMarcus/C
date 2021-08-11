#include <stdio.h>

int main()
{
  int n100,n50,n20,n10,n5,n2,n1,resto100,resto50,resto20,resto10,resto5,resto2,resto1,num;
    printf("Olá usuário!!\n");
    printf("Esse programa tem como objetivo lhe dizer quais e quantas notas você vai receber. \n");
    printf("Insira o valor que deseja sacar: \n");
    scanf("%d", &num);
     
     n100=num/100;
     resto100=num%100;
     n50=resto100/50;
     resto50=resto100%50;
     n20=resto50/20;
     resto20=resto50%20;
     n10=resto20/10;
     resto10=resto20%10;
     n5=resto10/5;
     resto5=resto10%5;
     n2=resto5/2;
     resto2=resto5%2;
     n1=resto2/1;
     resto1=resto2%1;
     
    printf("Você irá receber: %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2, %d notas de 1.\n", n100,n50,n20,n10,n5,n2,n1);  
     
     
     
    return 0;
}

