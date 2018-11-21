#include <stdio.h>
#include <locale.h>
#define TAM 5

/* Faça uma função que receba três filas, duas já preenchidas em ordem crescente e
preencha a última com os valores das duas primeiras em ordem crescente. Utilize o
protótipo abaixo:
void preenche (int *F1, int *F2, int *Retorno)
; */

void printvet(int *vet, int tam);
void InsertionSort(int *vet, int tam);
void enfileirar(int *fila, int valor, int *tras);
int desenfileirar(int *fila, int *frente);
void preenche (int *F1, int *F2, int *Retorno);


int main() {
    setlocale(LC_ALL, "portuguese");

    int fila1[TAM], frente1 = 0, tras1 = -1;
    int fila2[TAM], frente2 = 0, tras2 = -1;
    int fila3[TAM+TAM], frente3 = 0, tras3 = -1;

    for (int i=1; i<11; i++)
        if (i % 2 == 0) enfileirar(fila2, i, &tras2);
        else enfileirar(fila1, i, &tras1);


    preenche(fila1, fila2, fila3);

    printvet(fila3, TAM + TAM);

    return 0;
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

void preenche (int *F1, int *F2, int *Retorno) {
    int frente1 = 0, frente2 = 0, frente3 = 0, tras = -1;

    for (int i=0; i<TAM; i++) {
        enfileirar(Retorno, desenfileirar(F1, &frente1), &tras);
        enfileirar(Retorno, desenfileirar(F2, &frente2), &tras);
        InsertionSort(Retorno, tras);
    }
}
