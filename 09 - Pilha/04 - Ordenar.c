#include <stdio.h>
#include <locale.h>

/* Dado uma pilha que armazene numeros, escreva uma funcao para ordenar os valores da pilha em ordem crescente. */

int Pop(int *pilha, int *topo);
void InsertionSort(int *vet, int tam);
void Push(int valor, int *pilha, int *topo);

int main() {
    setlocale(LC_ALL, "portuguese");
    int aux, pilha[5], topo = -1, saida[5];

    printf("Entre com 5 numeros: \n");

    for (int i=0; i<5; i++) {
        scanf("%d", &aux);
        Push(aux, pilha, &topo);
    }

    for (int i=0; i<5; i++) {
        saida[i] = Pop(pilha, &topo);
        InsertionSort(saida, i+1);
    }

    printf("Vetor ordenado: ");
    for (int i=0; i<5; i++)
        printf("%d ", saida[i]);

    return 0;
}

int Pop(int *pilha, int *topo) {
        *topo -= 1;
        return pilha[*topo +1];
}

void Push(int valor, int *pilha, int *topo) {
        *topo += 1;
        pilha[*topo] = valor;
}

void InsertionSort(int *vet, int tam) {
    int aux;
    int j;
    for (int i=1; i < tam; i++) {
        aux = vet[i];
        for (j=i; j > 0 && aux < vet[j -1]; j--)
            vet[j] = vet[j -1];
        vet[j] = aux;
    }
}
