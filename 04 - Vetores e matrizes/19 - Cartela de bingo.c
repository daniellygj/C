#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define TAM 5

/* Faca um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela devera conter 5 linhas e 5 colunas.
Ger estes dados de modo a nao ter numeros repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada */

int verificar(int *matriz[TAM][TAM]){
    int c1, c2, c3, c4;

   for (c1=0; c1<TAM; c1++){
        for (c2=0; c2<TAM; c2++){
            for (c3=0; c3<c1; c3++){
                for (c4=0; c4<c2; c4++){
                    //printf("%d == %d\n", matriz[c1][c2], matriz[c3][c4]);
                    if (matriz[c1][c2] == matriz[c3][c4]){
                        matriz[c3][c4] = rand() % 99;
                        verificar(matriz);
                    }
                }
            }
        }
    }
}

int main(){
    int matriz[TAM][TAM], c2, c, temp, c1, c3, c4;

    srand(time(NULL));
    for (c=0; c<TAM; c++){
        for (c2=0; c2<TAM; c2++){
            matriz[c][c2] = rand() % 99;
            //matriz[c][c2] = verificar(matriz, temp);
            verificar(matriz);
        }
    }

    for (c=0; c<TAM; c++){
        printf("\n");
        for (c2=0; c2<TAM; c2++){
            printf("%d ", matriz[c][c2]);
        }
    }
}
