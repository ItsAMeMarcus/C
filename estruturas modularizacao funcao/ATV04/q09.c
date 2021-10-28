#include <stdio.h>

#define TAM_NOME 60
#define TAM_ARRAY 50

void cadastrarCliente(int validacao[]);
int validarNome(char nome[], int retornoNome);
int validarNascimento(int data[], int retornoData);
int validarCPF(char cpf[], int retornoCPF);
int validarSexo(char sexo, int retornoSexo);

int main(){
    
    int validacao[4];
    int i;

    cadastrarCliente(validacao);

    puts("-------------------------------------------------------------------------------------------------");


    for(i = 0; i < 4; i++){
        if(validacao[i] == 1){
            puts("O seu Cadastro não pode ser realizado pois: ");
            if(validacao[0] == 1){
                puts("Houve um erro na na informação do nome (ultrapassou o limite de caracteres)");
            }

            if(validacao[1] == 1){
                puts("Houve um erro na na informação da data (formato não suportado)");
            }
            
            if(validacao[2] == 1){
                puts("Houve um erro na na informação do CPF (formato não suportado)");
            }

            if(validacao[3] == 1){
                puts("Houve um erro na na informação do seu gênero (formato não suportado)");
            }
            return 0;
        }
    }

    puts("Cadastro realizado com sucesso");

    return 0;
}

void cadastrarCliente(int validacao[]){
    
    char nome[TAM_ARRAY];
    char cpf[TAM_ARRAY];
    char sexo;

    int retornoNome;
    int retornoData;
    int retornoCPF;
    int retornoSexo;
    int data[3];

    puts("Insira o seu nome(com até 20 caracteres):");
    fgets (nome, TAM_NOME, stdin);
    puts("Insira seu CPF(sem caracteres especiais):");
    fgets (cpf, TAM_ARRAY, stdin);  
    puts("Insira seu gênero(H,M ou O):");
    scanf(" %c", &sexo);    
    puts("insira sua dia de nascimento, depois mês e ano:");
    scanf("%d %d %d", &data[0], &data[1], &data[2]);  

    retornoNome = validarNome(nome,retornoNome);
    retornoData = validarNascimento(data, retornoData);
    retornoCPF = validarCPF(cpf,retornoCPF);
    retornoSexo = validarSexo(sexo,retornoSexo);

    validacao[0] = retornoNome;
    validacao[1] = retornoData;
    validacao[2] = retornoCPF;
    validacao[3] = retornoSexo;
}

int validarNome(char nome[], int retornoNome){
    int i;
    int caracteres = 0;

    for(i = 0; i < TAM_NOME; i++){
        if(nome[i] != '\0'){
            caracteres++;
        }
    }

    if(caracteres < 21){
        retornoNome = 0;
    }
    else{
        retornoNome = 1;
    }
    return retornoNome;
}

int validarNascimento(int data[], int retornoData){

    if((data[0] <= 31)&&(data[1] <= 12)&&(data[2] <= 2022)){
        retornoData = 0;
    }
    else{
        retornoData = 1;
    }
    return retornoData;
}

int validarCPF(char cpf[], int retornoCPF){
    int i;
    int caracteres = 0;

    for(i = 0; i < 20; i++){
        if((cpf[i] != '\0')){
            caracteres++;
        }
    }

    if(caracteres < 13){
        retornoCPF = 0;
    }
    else{
        retornoCPF = 1;
    }
    return retornoCPF;
}


int validarSexo(char sexo, int retornoSexo){


    if((sexo == 'H')||(sexo == 'h')||(sexo == 'M')||(sexo == 'm')||(sexo == 'O')||(sexo == 'o')){
        retornoSexo = 0;
    }
    else{
        retornoSexo = 1;
    }
    return retornoSexo;
}

