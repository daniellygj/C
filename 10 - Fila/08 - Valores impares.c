#include <stdio.h>
#include <locale.h>
#define TAM 10

/*  Faca uma funcao para retornar o numero de elementos da ﬁla que possuem valor ımpar */

void printvet(int *vet, int tam);
int desenfileirar(int *fila, int *frente);
void enfileirar(int *fila, int valor, int *tras);

int main() {
    setlocale(LC_ALL, "portuguese");

    int fila[TAM], aux, frente = 0, tras = -1, cont = 0;

    printf("Entre com 10 numeros: \n");
    for (int j=1; j<=TAM; j++) {
        scanf("%d", &aux);
        enfileirar(fila, aux, &tras);
    }

    for (int j=0; j<TAM; j++)
        if (desenfileirar(fila, &frente) % 2 != 0) cont++;

    printf("A fila possui %d valores impares.\n", cont);

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
