#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

// Leia uma matriz 4x4, a imprima e retorne a localização (linha e coluna) do maior valor

int main(){
    int matriz[TAM][TAM], c, c2, maior, p1, p2;

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            scanf("%d", &matriz[c][c2]);

            if (c2 == 0){
                maior = matriz[c][c2];
                p1 = c;
                p2 = c2;

            }
            if (matriz[c][c2] > maior){
                maior = matriz[c][c2];
                p1 = c;
                p2 = c2;
            }
        }
    }
    printf("[%d][%d]", p1,p2);
    return 0;
}
