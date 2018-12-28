#include <stdio.h>
#include <stdlib.h>

struct Lista {
    int info;
    struct Lista *prox;
};

typedef struct Lista LISTA;

LISTA *criarLista() {
    return NULL;
}

LISTA *insereInicio(LISTA *lista, int info) {
    LISTA *novo = malloc (sizeof(LISTA)); // Cria um novo nó
    novo->info = info; // Coloca o novo valor na lista
    novo->prox = lista; // Para que a inserção seja feita no inicio, adicionamos a lista original "na frente" do novo elemento

    return novo;
}


LISTA *insereFinal(LISTA *lista, int info) {
    LISTA *temp = lista;

    while (temp != NULL) // Avança até chegar no final, que é nulo
        temp = temp->prox;

    temp = malloc(sizeof(lista));
    temp->info = info;
    temp->prox = NULL;

    return temp;
}


void imprimir(LISTA *lista) {
    LISTA *temp;

    for (temp = lista; temp != NULL; temp = temp->prox)
        printf("%d\n", temp->info);
}

int vazia(LISTA *lista) {
    if (lista == NULL)
        return 1;
    return 0;
}

LISTA *buscar(LISTA *lista, int info) {
    LISTA *temp;

    for (temp = lista; temp != NULL; temp = temp->prox)
        if (temp->info == info)
            return temp;

    return NULL;
}

LISTA *remover(LISTA *lista, int info) {
    LISTA *anterior = NULL; //ponteiro para o elemento anterior
    LISTA *temp = lista;

    while (temp != NULL && temp->info != info) { //se for igual da falso e sai do loop
        anterior = temp;
        temp = temp->prox;
    }

    if (temp == NULL) return lista;

    if (anterior == NULL) // remove do inicio da lista
        lista = temp->prox;
    else // remove do meio da lista
        anterior->prox = temp->prox;


    free(temp);

    return lista;
}

void liberar(LISTA *lista) {
    LISTA *temp = lista;

    while (temp != NULL) {
        LISTA *aux = temp -> prox; // Guarda uma referência ao próximo elemento da lista
        free(temp);

        temp = aux;
    }
}

int comparar(LISTA *lista1, LISTA *lista2) {
    LISTA *temp1 = lista1, *temp2 = lista2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->info != temp2->info)
            return 0;

        temp1 = temp1->prox;
        temp2 = temp2->prox;
    }

    return 1;
}

int main() {
    LISTA *lista, *lista1;

    lista = criarLista();

    if (vazia(lista)) printf ("Lista vazia\n");
    else printf("Não está vazia.\n");

    lista = insereInicio(lista, 10);
    lista = insereInicio(lista, 15);
    lista = insereInicio(lista, 20);
    imprimir(lista);

    //if (buscar(lista, 0) == NULL) printf("Não encontrado\n");
    //else printf("Encontrado %d\n", lista->info);

    //lista = remover(lista, 15);
    //imprimir(lista);

    //liberar(lista);
    //imprimir(lista);

    lista1 = insereInicio(lista1, 10);
    lista1 = insereInicio(lista1, 15);
    lista1 = insereInicio(lista1, 2);

    //printf("%d", comparar(lista, lista1));

    if (comparar(lista, lista1)) printf("iguais\n");
    else printf("diferentes\n");

    return 0;
}
