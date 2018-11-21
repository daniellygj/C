#include <stdio.h>
#include <locale.h>

/* Escreva uma funcao que, dado duas ﬁlas, concatene as duas ﬁlas. Retorne a ﬁla concatenada em F1. F2 deve ﬁcar vazia.. */

void printvet(int *vet, int tam);
int desenfileirar(int *fila, int *frente);
void enfileirar(int *fila, int valor, int *tras);
void concatenar(int *fila1, int *fila2, int *frente2, int *tras1);

int main() {
    setlocale(LC_ALL, "portuguese");

    int fila1[10], frente1 = 0, tras1 = -1;
    int fila2[5], frente2 = 0, tras2 = -1;

    for (int i=1; i<11; i++)
        if (i % 2 == 0) enfileirar(fila2, i, &tras2);
        else enfileirar(fila1, i, &tras1);

        concatenar(fila1, fila2, &frente2, &tras1);

        printvet(fila1, 10);

    return 0;
}

void concatenar(int *fila1, int *fila2, int *frente2, int *tras1) {
    for (int i=0; i<5; i++)
        enfileirar(fila1, desenfileirar(fila2, frente2), tras1);
}

void printvet(int *vet, int tam) {
    printf("\n");
    for (int i=0; i<tam; i++)
        printf("%d ", vet[i]);
}

void enfileirar(int *fila, int valor, int *tras) {
        *tras += 1;
        fila[*tras] = valor;
}

int desenfileirar(int *fila, int *frente) {
    *frente += 1;
    return fila[*frente -1];
}

