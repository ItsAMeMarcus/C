
#include <stdio.h>

int main()
{
    
  float ns,nb1,nb2,p1,p2,p3,p4;
  int num;
  
    printf ("Olá usuario!!\n");
    printf ("Esse programa tem a finalidade de calcular a nota semestral dos alunos.\n");
    printf ("Informe o numero de 8 digitos da matricula do aluno: \n");
    scanf ("%i", &num);
    printf ("\n");
    printf ("Insira aqui as notas das 2 provas do primeiro bimestre: \n");
    scanf ("%f %f", &p1, &p2);
    printf ("\n");
    printf ("Muito bem, agora as notas das duas provas do segundo bimestre: \n");
    scanf ("%f %f", &p3, &p4);
    printf ("\n");
    
     nb1 = (p1 + p2)/2;
     nb2 = (p3 + p4)/2;
     ns = (nb1 + nb2)/2;
     
    
   printf ("Pois bem, a nota semestral do aluno #%i é %f.\n", num,ns);  

    return 0;
}

