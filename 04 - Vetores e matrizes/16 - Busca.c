#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 5

/* Leia uma matriz 5x5. Leia tambem um valor X. O programa devera fazer uma busca desse valor na matriz e, ao final, escrever a localizacao (linha e coluna) ou
mensagem de "nao encontrado" */

void posicaonum(int matriz[TAM][TAM], int num){
    int c, c2, linha, coluna;
    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            if (matriz[c][c2] == num){
                linha = c;
                coluna = c2;
                printf("[%d][%d]", linha, coluna);
                return;
            }
        }
    }
    printf("Numero nao encontrado. ");
    return;
}

int main(){
    int matriz[TAM][TAM], c, c2, num, p1, p2;
    bool aux;

    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            scanf("%d", &matriz[c][c2]);
        }
    }

    printf("Que numero deseja encontrar? ");
    scanf("%d", &num);

    posicaonum(matriz, num);

    return 0;
}
