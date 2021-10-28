#include <stdio.h>
#define TAM_ARRAY 3

char ler3Letras(char vetor[]){
  int i;

  for(i = 0; i < TAM_ARRAY; i++) {
    printf("Insira a %d° letra\n",i + 1);
    scanf(" %c",&vetor[i]);
  }
}

int main(){
  char array[TAM_ARRAY];
  int i;

  ler3Letras(array);

  puts("-------------------------------------------------------------------------------------------------");


  for(i = 0; i < TAM_ARRAY; i++){
    printf("%d° letra: %c \n",i + 1,array[i]);
  }

  return 0;
} 