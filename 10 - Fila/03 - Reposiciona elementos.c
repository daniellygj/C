#include <stdio.h>
#include <locale.h>
#define TAM 5

/* Implemente a funcao reverso, que reposiciona os elementos na ﬁla de tal forma que o inıcio da ﬁla torna-se o ﬁm, e vice-versa. */

void printvet(int *vet);
int desenfileirar(int *fila, int *frente);
void inverteFila(int *fila, int tam);
void enfileirar(int *fila, int valor, int *tras);

int main() {
    setlocale(LC_ALL, "portuguese");
    int fila[TAM], aux, frente = 0, tras = -1;

    printf("Entre com 5 numeros: \n");
    for (int j=0; j<TAM; j++) {
        scanf("%d", &aux);
        enfileirar(fila, aux, &tras);
    }

    inverteFila(fila, TAM);

    printvet(fila);
    return 0;
}

void printvet(int *vet) {
    printf("\n");
    for (int i=0; i<TAM; i++)
        printf("%d ", vet[i]);
}

void inverteFila(int *fila, int tam) {
    int aux;
    for (int i=tam-1, j = 0; i > tam/2; i--, j++) {
        aux = fila[i];
        fila[i] = fila[j];
        fila[j] = aux;
    }
}

void enfileirar(int *fila, int valor, int *tras) {
        *tras += 1;
        fila[*tras] = valor;
}

int desenfileirar(int *fila, int *frente) {
    *frente += 1;
    return fila[*frente -1];
}
