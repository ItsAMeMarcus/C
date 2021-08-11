#include <stdio.h>

int main()
{
    int var1 = 5;
    int var2 = 10;
    int aux = 0;
    
    printf("var1 = %d \nvar2 = %d \n", var1,var2);
    
    aux = var1;
    var1 = var2;
    var2 = aux;
    
    puts("*********************************************");
    printf("var1 = %d \nvar2 = %d \n", var1,var2);
    

    return 0;
}
