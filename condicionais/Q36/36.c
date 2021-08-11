#include <stdio.h>

int main()
{
    
  int I,II,III,IV,V;  
    
    printf("insira aqui as notas dos exames I a V em ordem: \n");
    scanf("%d%d%d%d%d", &I,&II,&III,&IV,&V);
    printf("\n");
    
     if ((I >= 70)&&(II >= 70)&&(III >= 70)&&(IV >= 70)&&(V >= 70)) {
        
         printf("estudante, a sua classifcação é: A \n");
        
     }
    else if ((I >= 70)&&(II >= 70)&&(III <= 70)&&(IV >= 70)&&(V <= 70)) {
        
        printf("estudante, a sua classifcação é: B \n");
        
    }
    else if ((I >= 70)&&(II >= 70)||(III >= 70)||(IV >= 70)&&(V <= 70)) {
        
        printf("estudante, a sua classifcação é: C \n");
        
    }
    else {
        
        printf("estudante, você reprovou. \n");
        
    }

    return 0;
}