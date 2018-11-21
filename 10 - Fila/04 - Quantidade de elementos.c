#include <stdio.h>
#include <locale.h>



/* Desenvolva uma funcao para testar se uma ﬁla F1 tem mais elementos do que uma ﬁla F2*/

void printvet(int *vet, int tam);
int verificar(int tam1, int tam2);
int desenfileirar(int *fila, int *frente);
void enfileirar(int *fila, int valor, int *tras);


int main() {
    setlocale(LC_ALL, "portuguese");

    int fila1[5], frente1 = 0, tras1 = -1;
    int fila2[6], frente2 = 0, tras2 = -1;

    for (int i=1; i<11; i++)
        if (i % 2 == 0) enfileirar(fila2, i, &tras2);
        else enfileirar(fila1, i, &tras1);

     enfileirar(fila2, 45, &tras2);

    if (verificar(tras1 - frente1, tras2 - frente2) == 0)
        printf("A fila 2 é maior.\n");
    else if (verificar(tras1 - frente1, tras2 - frente2) == 1)
        printf("A fila 1 é maior.\n");
    else
        printf("As filas possuem o mesmo tamanho.\n");
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

int verificar(int tam1, int tam2) {
    if (tam1 > tam2)
        return 1;
    else if (tam1 == tam2)
        return 2;
    return 0;
}
