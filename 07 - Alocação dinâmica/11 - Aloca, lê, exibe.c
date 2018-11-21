#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Construa um programa que leia o numero de linhas e de colunas de uma matriz de
numeros reais, aloque espaco dinamicamente para esta e a inicialize com valores fornecidos
pelo usuario. Ao final, o programa devera retornar a matriz na saıda padrao com
layout apropriado. */

int main(){
    float **matriz;
    int linhas, colunas;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz = (float**) malloc(linhas * sizeof(float*));

    for (int c=0; c<linhas; c++) matriz[c] = (float*) malloc (colunas * sizeof(float));

    for (int c=0; c<linhas; c++){
        for (int c2=0; c2<colunas; c2++){
            scanf("%f", &matriz[c][c2]);
        }
    }

    for (int c=0; c<linhas; c++){
        printf("\n");
        for (int c2=0; c2<colunas; c2++){
            printf("%.2f ", matriz[c][c2]);
        }
    }

    return 0;
}
