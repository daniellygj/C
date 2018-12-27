#include <stdio.h>
#include <stdlib.h>

// FIFO - First In First Out

struct lista {
    float info;
    struct lista *prox;
};

typedef struct lista Lista;


struct fila {
    Lista *inicio;
    Lista *fim;
};

typedef struct fila Fila;


int vazia (Fila *fila) {
    return (fila->inicio == NULL);
}


Fila *criar_fila() {
    Fila *fila = malloc(sizeof(fila));
    fila->inicio = fila->fim = NULL; // Inicializa com NULL
}


void inserir(Fila *fila, float valor) {
    Lista *temp = malloc(sizeof(Lista));
    temp->info = valor; // Armazena a informa��o
                        // O novo elemento ser� inserido na �ltima posi��o, seguindo a regra da fila
    temp->prox = NULL;  // O proximo recebe null pois � o ultimo da fila

    if (fila->fim != NULL) // Se a lista n�o estiver vazia...
        fila->fim->prox = temp; // O valor � inserido no final
    else
        fila->inicio = temp; // Sen�o, � inserido no in�cio

    fila->fim = temp; // Faz com que a fila aponte para o novo elemento
}


float remover (Fila *fila) { // A remo��o � feita no in�cio
    Lista *temp;
    float valor;

    if (vazia(fila)) {
        printf("Fila vazia!\n");
        exit(1);
    }

    temp = fila->inicio; // � necess�rio armazenar uma refer�ncia para o primeiro elemento
    valor = temp->info; // Como vou retornar, � necess�rio armazena-lo tambem
    fila->inicio = temp->prox; // Isso porque temp referencia o primeiro, que ser� removido
                               // ent�o como inicio tem que apontar para o primeiro e estamos removendo
                               // inicio vai apontar para o segunto que passar� a ser o primeiro

    if (vazia(fila))
        fila->fim = NULL; // Para indicar que a fila est� vazia

    free(temp); // Libera a memoria que era ocupada pelo primeiro elemento

    return valor;
}


void liberar (Fila *fila) {
    // Antes de liberar a fila, � necess�rio liberar todos elementos da lista
    Lista *temp = fila->inicio; // Armazena temporariamente o endere�o do primeiro elemento

    while(temp != NULL) {
        Lista *aux = temp->prox; // Armazena o endere�o do proximo
        free(temp); // Libera a mem�ria que o primeiro elemento estava ocupando
        temp = aux; // Temp recebe o endere�o do proximo elemento para libera-lo
    }

    free(fila);
}


void imprimir(Fila *fila) {
    Lista *temp = fila->inicio;

    while (temp != NULL) {
        printf("%f\n", temp->info);
        temp = temp->prox; // Avan�a o ponteiro
    }
}


int main() {
    Fila *fila = criar_fila();

    inserir(fila, 64);
    inserir(fila, 10);
    inserir(fila, 7);

    remover(fila);

    imprimir(fila);

    liberar(fila);
    return 0;
}
