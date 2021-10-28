#include <stdio.h>
#include <stdlib.h>

typedef struct dma {
	char dataCompleta[11];
  	int dia;
  	int mes;
	int ano; 
} Data;

typedef struct No{   //Criando um Nó
    pessoa Pessoa;
    struct No *proximo; 
}No;

typedef struct pessoa{   //Criando um Nó
    int matricula;
    char nome[50];
    char sexo; //M - Masculino, F - Feminino
    Data data_nascimento;
    char cpf[15];
}pessoa;

typedef struct{  //Criando a Lista (A lista é feita de nós)
    No *inicio, *fim;
    int tam;
}Lista;

void inserirInicio(Lista *lista, No cadastro){  //Função para inserir um nó no início
    No *novo = (No*)malloc(sizeof(No));
    novo->Pessoa.matricula = cadastro.Pessoa.matricula;
    novo->Pessoa.sexo = cadastro.Pessoa.sexo;

    if(lista->inicio == NULL){ //caso a lista esteja vazia
        novo->proximo = NULL;
        lista->inicio = novo;
    }
    else{     //caso a lista NÃO esteja vazia
        novo->proximo = lista->inicio;
        lista->inicio = novo;
    }    
    lista->tam++;
}

void inserirFim(Lista *lista, No *valor) {
    No *novo = (No*)malloc(sizeof(No)); // cria um novo nó
    novo = valor;
    novo->proximo = NULL;

    if(lista->inicio == NULL) { // lista vazia
        lista->inicio = novo;
        lista->fim = novo;
    } else { // lista não vazia
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
    lista->tam++;
}

void imprimir(Lista *lista) {
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tam);
    while(inicio != NULL) {
        printf("%d \n", inicio->Pessoa.matricula);
        printf("%c \n", inicio->Pessoa.sexo);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}

int main (){
    Lista lista;
    int opcao;
    No cadastro;
    lista.inicio = NULL;
    lista.tam = 0;


    do{
        printf("1 - Inserir no inicio\n2 - Imprimir\n3 - Inserir no Fim\n4 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
            puts("Digite o numero de matricula");
            scanf("%d",&cadastro.Pessoa.matricula);
            puts("Digite sexo");
            scanf(" %c",&cadastro.Pessoa.sexo);
            inserirInicio(&lista, cadastro);
            break;
        case 2: 
            imprimir(&lista);
            break;
        case 3: 
            printf("Digite um valor a ser inserido: ");
            //scanf("%d", &valor);
            //inserirFim(&lista, &valor);
            break;
        case 4:
            puts("Finalizando...");
            break;
        default:
            puts("Opção invalida!");
            break;
        }
    }while(opcao != 4);

    
    return 0;
}