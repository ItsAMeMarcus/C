#include <stdio.h>

int main (){

     int num = 0;
     int soma = 0;
     int iCont = 0;


    while (iCont != 100)
    {
       num++;
       printf("%d\n",num);
       soma = soma + num;
       iCont++;


    }

    printf("%d\n",soma);

    return 0;
}