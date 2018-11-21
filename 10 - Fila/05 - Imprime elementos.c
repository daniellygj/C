#include <stdio.h>
#include <locale.h>

/* Implemente uma funcao que imprima os elementos de uma ﬁla */

void printFila(int *vet, int *frente, int tam);
int desenfileirar(int *fila, int *frente);
void enfileirar(int *fila, int valor, int *tras);

int main() {
    setlocale(LC_ALL, "portuguese");

    int fila[5], frente = 0, tras = -1;

    for (int i=1; i<6; i++)
    enfileirar(fila, i, &tras);

    printFila(fila, &frente, (tras - frente) +1);
    return 0;
}

void printFila(int *vet, int *frente, int tam) {
    printf("\n");
    for (int i=0; i<tam; i++)
        printf("%d ", desenfileirar(vet, frente));
}

void enfileirar(int *fila, int valor, int *tras) {
        *tras += 1;
        fila[*tras] = valor;
}

int desenfileirar(int *fila, int *frente) {
    *frente += 1;
    return fila[*frente -1];
}
