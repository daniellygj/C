#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Dado os tipos estruturados Funcionario  e Firma abaixo:
typedef struct funcionario {
    char nome[100];
    double salario;
} Funcionario;
    typedef struct firma {
    char nome[100];
    unsigned qtdFuncionario;
    Funcionario** vetor; // representa um vetor de //ponteiros para Funcionario
} Firma;
Escreva depois uma função em C chamada de criarFirma que cria dinamicamente uma firma e retorna um ponteiro para esta firma. A função deve receber como
parâmetro uma string com o nome da firma. A função então deve criar dinamicamente uma firma e inicializar o membro nome, com a string passada como
parâmetro. A função ainda deve inicializar o membro qtdFuncionario o valor 0, e atribuir ao membro vetor o valor NULL.
*/

typedef struct {
    char nome[100];
    double salario;
} Funcionario;

typedef struct {
    char nome[100];
    unsigned qtdFuncionario;
    Funcionario *vetor;
} Firma;

Firma *criarFirma(char *nome) {
    Firma *firma;
    firma = malloc(sizeof(Firma));
    strcpy(firma->nome, nome);
    firma->qtdFuncionario = 0;
    firma ->vetor = NULL;

    return firma;
}

int main() {
    Firma *fiirma;

    fiirma = criarFirma("Firmazinha\n");

    printf("%s", fiirma->nome);
}



