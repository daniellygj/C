#include <stdio.h>
#include <locale.h>
#define TAM 5

/* Faca uma funcao para intercalar ﬁlas: a funcao recebe as duas ﬁlas e retorna a ﬁla com os elementos das duas ﬁlas intercalados conforme a ordem com que elas
se dispoem na ﬁla */

void printvet(int *vet, int tam);
int desenfileirar(int *fila, int *frente);
void enfileirar(int *fila, int valor, int *tras);

int main() {
    setlocale(LC_ALL, "portuguese");

    int fila1[TAM], aux, frente1 = 0, tras1 = -1;
    int fila2[TAM], frente2 = 0, tras2 = -1;
    int fila3[TAM+TAM], frente3 = 0, tras3 = -1;

    printf("Entre com 5 numeros(fila 1): \n");
    for (int j=0; j<TAM; j++) {
        scanf("%d", &aux);
        enfileirar(fila1, aux, &tras1);
    }

    printf("Entre com 5 numeros(fila 2): \n");
    for (int j=0; j<TAM; j++) {
        scanf("%d", &aux);
        enfileirar(fila2, aux, &tras2);
    }

    for (int i=0; i<TAM; i++) {
        enfileirar(fila3, desenfileirar(fila1, &frente1), &tras3);
        enfileirar(fila3, desenfileirar(fila2, &frente2), &tras3);
    }

    printf("\nFila 3: ");
    for (int i=0; i<TAM+TAM; i++)
        printf("%d ", desenfileirar(fila3, &frente3));

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
