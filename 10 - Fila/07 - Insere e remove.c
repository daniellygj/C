#include <stdio.h>
#include <locale.h>

/* Dada as operacoes de ﬁla insere I e remove R, escreva a conﬁguracao ﬁnal da ﬁla apos as seguintes operacoes: I(10), I(20), R, I(30), I(45), I(21), R, R.*/

void printvet(int *vet, int frente, int tras);
int R(int *fila, int *frente);
void I(int *fila, int valor, int *tras);

int main() {
    setlocale(LC_ALL, "portuguese");
    int fila[5], frente = 0, tras = -1;

    I(fila, 10, &tras);
    I(fila, 20, &tras);
    R(fila, &frente);
    I(fila, 30, &tras);
    I(fila, 45, &tras);
    I(fila, 21, &tras);
    R(fila, &frente);
    R(fila, &frente);

    printvet(fila, frente, tras);

    return 0;
}

void printvet(int *vet, int frente, int tras) {
    printf("\n");
    for (int i=frente; i<=tras; i++)
        printf("%d ", vet[i]);
}

void I(int *fila, int valor, int *tras) {
        *tras += 1;
        fila[*tras] = valor;
}

int R(int *fila, int *frente) {
    *frente += 1;

}
