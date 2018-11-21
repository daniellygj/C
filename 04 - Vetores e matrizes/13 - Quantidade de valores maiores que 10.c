#include <stdio.h>
#include <locale.h>
#define TAM 4

// Leia uma matriz 4x4. Conte e escreva quantos valores maiores que 10 ela possui

int main() {
    int matriz[TAM][TAM];
    int c, c1, cont10=0;

    for (c=0; c<TAM; c++) {
        for (c1=0; c1<TAM; c1++) {
            scanf("%d", &matriz[c][c1]);
        }
    }

    for (c=0; c<TAM; c++) {
        for (c1=0; c1<TAM; c1++) {
            if (matriz[c][c1] >= 10) {
                printf("%d\n", matriz[c][c1]);
                cont10++;
            }
        }
    }
    printf("\n%d numeros maiores do que 10", cont10);

    return 0;
}
