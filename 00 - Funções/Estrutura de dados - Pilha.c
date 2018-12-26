#include <stdio.h>
#include <stdlib.h>

#define TAM 20


struct pilha {
	int n;
	float vet[TAM];
};

typedef struct pilha Pilha;


Pilha* criar() {
	Pilha *pilha = malloc(sizeof(Pilha));
	pilha->n = 0;
	return pilha;
}

void push(Pilha* pilha, float v) { // INSERE, EMPILHA
	if(pilha->n == TAM) {// Se estiver cheio...
		printf("Pilha cheia!\n");
		exit(1);
	}
	pilha->vet[pilha->n] = v; // Se n�o est� cheio insere na proxima posi��p
	pilha->n++;
}

int vazia(Pilha* pilha) {
	return (pilha->n == 0); // Se for igual a zero, significa que est� vazia
}

float pop(Pilha* pilha) { // DESEMPILHA, REMOVE
	float v;

	if(vazia(pilha)) {
		printf("Pilha vazia!\n");
		exit(1);
	}

	v = pilha->vet[pilha->n -1]; // Remove elemento do topo
	pilha->n--; // Para decrementar o topo

	return v;
}

void liberar(Pilha* pilha) {
	free(pilha); // Libera mem�ria alocada pela pilha
}

float topo(Pilha* pilha) { // Retorna o elemento do topo da pilha
	if(vazia(pilha)) {
		printf("Pilha vazia\n");
		exit(1);
	}
	return pilha->vet[pilha->n -1];
}

