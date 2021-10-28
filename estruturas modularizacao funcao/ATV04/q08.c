#include <stdio.h>
#define TAM_ARRAY 50

void cadastrarCliente(char nome[],char data[],char cpf[],char sexo[]){

    puts("Insira o seu nome:");
    fgets (nome, TAM_ARRAY, stdin);     
    puts("insira sua data de nascimento(DD/MM/AAAA):");
    fgets (data, TAM_ARRAY, stdin);
    puts("Insira seu CPF:");
    fgets (cpf, TAM_ARRAY, stdin);
    puts("Insira seu gênero(Homem/Mulher/Outro):");
    fgets (sexo, TAM_ARRAY, stdin);


}

int main(){
    char nome[TAM_ARRAY];
    char data[TAM_ARRAY];
    char cpf[TAM_ARRAY];
    char sexo[TAM_ARRAY];
    int i;

    cadastrarCliente(nome,data,cpf,sexo);

    puts("-------------------------------------------------------------------------------------------------");


    printf("Nome: %s \n",nome);
    
    printf("Data de nascimento: %s \n",data);
    
    printf("CPF: %s \n",cpf);

    printf("Gênero: %s \n", sexo);


    return 0;
} 