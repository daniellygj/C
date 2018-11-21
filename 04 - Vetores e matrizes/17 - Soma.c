#include <stdio.h>
#include <locale.h>
#define TAM 3

// Leia uma matriz 3x3 e calcule a soma dos elementos que estão acima da diagonal principal

int main(){

    int matriz[TAM][TAM], soma=0, c, c2=0;

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            scanf("%d", &matriz[c][c2]);
        }
    }

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            if (c2 > c){
                soma += matriz[c][c2];
            }
        }
    }

    printf("%d", soma);

    return 0;
}
