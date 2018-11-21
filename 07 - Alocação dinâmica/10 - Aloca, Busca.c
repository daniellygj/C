#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensoes
definidas pelo usuario e a leia. Em seguida, implemente uma funcao que receba um
valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso nao esteja na matriz. */

int main(){
    int **matriz, colunas, linhas;

    printf("Entre com a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Entre com a quantidade de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (int**) calloc (linhas, sizeof(int*));

    for (int c=0; c<linhas; c++) matriz[c] = (int*) calloc(linhas, sizeof(int));

    for (int c=0; c<linhas; c++){
        for (int c2=0; c2<colunas; c2++){
            scanf("%d", &matriz[c][c2]);
        }
    }

    for (int c=0; c<linhas; c++){
        printf("\n");
        for (int c2=0; c2<colunas; c2++){
            printf("%d", matriz[c][c2]);
        }
    }


    return 0;
}
