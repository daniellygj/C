#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/* Escreva uma função chamada de admitirFuncionario que dado um ponteiro para uma firma, insere um novo funcionário na firma. A função deve criar
dinamicamente um funcionário e ler do usuário o nome e o salário do funcionário. Depois disso, a função deve  inseri-lo no vetor de ponteiros de funcionários
da firma. Para inserir o funcionário no vetor, a função deve redimensionar dinamicamente o membro vetor de Firma.  Não se esqueça de atualizar o membro da
firma qtdFuncionario.  */

typedef struct {
    char nome[100];
    float salario;
} Funcionario;

typedef struct {
    char nome[100];
    unsigned qtdFuncionario;
    Funcionario *vetor;
} Firma;

Firma *criarFirma(char *nome);
void admitirFuncionario(Firma *firma);

int main() {
    Firma *firma;

    firma = criarFirma("firmazinha");
    admitirFuncionario(firma);

    printf("\n%s", firma->nome);
    printf("\nQuantidade de funcionarios: %d", firma->qtdFuncionario);
    printf("\nNome funcionario: %s\n", firma->vetor[0].nome);
    printf("Salario: %.2f", firma->vetor[0].salario);
}

Firma *criarFirma(char *nome) {
    Firma *firma;
    firma = malloc(sizeof(Firma));
    strcpy(firma->nome, nome);
    firma->qtdFuncionario = 0;
    firma ->vetor = NULL;
    return firma;
}

void admitirFuncionario(Firma *firma) {
    firma->vetor = malloc(sizeof(Funcionario));

    printf("Nome do funcionario: ");
    fgets(firma->vetor[firma->qtdFuncionario].nome, 100, stdin);
    firma->vetor[firma->qtdFuncionario].nome[strlen(firma->vetor[firma->qtdFuncionario].nome) -1] = '\0';

    printf("Salario: ");
    scanf("%f", &firma->vetor[firma->qtdFuncionario].salario);

    firma->qtdFuncionario++;
}
