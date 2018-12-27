#include <stdio.h>
#include <stdlib.h>

#define TAM 20


struct lista {
	float info;
	struct lista *prox;
};

typedef struct lista Lista;


struct pilha {
    Lista *primeiro; // Ponteiro para o primeiro nó da lista
    // Cada elemento dessa pilha deve apontar para o proximo, por isso é um ponteiro
    // do tipo lista.
};

typedef struct pilha Pilha;


Pilha *criar() { // Inicializa a lista
    Pilha *pilha = malloc (sizeof(Pilha));
    pilha->primeiro = NULL; // Primeiro é  NULL
    return pilha;
}

//Cada novo elemento é inserido no início da lista(topo)
//Quando solicitado, retiramos elemento do início também, que é o topo

void push(Pilha *pilha, float valor) {
    Lista *temp = malloc (sizeof(Lista));
    temp->info = valor; // Insere um valor na pilha
    temp->prox = pilha->primeiro; // Acertando o encadeamento
    pilha->primeiro = temp; // coloca os outros valores na frente
} // insere um novo valor fazendo-o apontar para o que antes era o primeiro elemento

int vazia (Pilha *pilha) {
    return (pilha->primeiro == NULL);
}

float pop (Pilha *pilha) {
    Lista *temp;
    float valor;

    if(vazia) {
        printf("Pilha vazia!\n");
        exit(1);
    }

    temp = pilha->primeiro;
    valor = temp->info; // Para guardar a informação a ser retornada
    pilha->primeiro = temp->prox; // Acertando o encadeamento
    free(temp); // Libera a memória

    return valor; // Retorna o elemento que foi removido

}

void liberar (Pilha *pilha) {
    Lista *lista = pilha->primeiro;

    while (lista != NULL) { // Enquanto houver elementos na lista...
        Lista *temp = lista->prox; // Guardo o endereço do proximo para poder liberar a memória
        free(lista);
        lista = temp;
    }
    free(pilha);
}

float topo(Pilha *pilha) { // Retorna o valor que está no topo
    if(vazia(pilha)) {
        printf("Pilha vazia!\n");
        exit(1);
    }

    return pilha->primeiro->info;

}

int main(int argc, char *argv[])
{
	Pilha* p;

	p = criar();
	push(p, 10);
	printf("Topo: %.2f\n", topo(p));
	push(p, 20);
	printf("Topo: %.2f\n", topo(p));
	push(p, 30);
	printf("Topo: %.2f\n", topo(p));

	pop(p);
	printf("\n\n\nTopo: %.2f\n", topo(p));
	printf('a');
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	pop(p);
	printf("Topo: %.2f\n", topo(p));
	return 0;
}

