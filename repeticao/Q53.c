#include <stdio.h>

int main()
{
    
    int finalnum,finalx,habitantesA = 5000000,habitantesB = 7000000,anos;
    
    finalnum =habitantesB - habitantesA;
    finalx = 150000 - 140000;
    anos = finalnum / finalx;
    
    
    printf("O tempo necessário é de %d anos\n",anos);

    return 0;
}
