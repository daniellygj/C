#include <stdio.h>
#include <locale.h>
#define TAM 5

/* Considere uma lista contendo numeros inteiros. Escreva uma funcao para ordenar essa ﬁla em ordem crescente de seus valores. */

void printvet(int *vet);
void InsertionSort(int *vet, int tam);
void enfileirar(int *fila, int valor, int *tras);
int desenfileirar(int *fila, int *frente, int tras);

int main() {
    setlocale(LC_ALL, "portuguese");

    int fila[TAM], frente = 0, tras = -1, ordenado[TAM], aux;


    printf("Entre com 5 numeros: \n");
    for (int j=0; j<TAM; j++) {
        scanf("%d", &aux);
        enfileirar(fila, aux, &tras);
    }

    for (int i=0; i<TAM; i++)  {
        ordenado[i] = desenfileirar(fila, &frente, tras);
        InsertionSort(ordenado, i +1);
    }

    printvet(ordenado);

    return 0;
}

void printvet(int *vet) {
    printf("\n");
    for (int i=0; i<TAM; i++)
        printf("%d ", vet[i]);
}

void enfileirar(int *fila, int valor, int *tras) {
    if (*tras == TAM -1)
        printf("Lista cheia!\n");
    else {
        *tras += 1;
        fila[*tras] = valor;
    }
}


int desenfileirar(int *fila, int *frente, int tras) {
    *frente += 1;
    return fila[*frente -1];
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
