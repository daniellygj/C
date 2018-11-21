#include <stdio.h>
#include <locale.h>
#define TAM 5

// Declare uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

int main(){
    int matriz[TAM][TAM], c, c2;

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            if (c != c2){
                matriz[c][c2] = 0;
            } else {
                matriz[c][c2] = 1;
            }
        }
    }

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            printf("%d ", matriz[c][c2]);
        }
        printf("\n");
    }
}
