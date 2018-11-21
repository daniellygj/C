#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a funcao de alocacao dinamica
de memoria CALLOC:
(a) Faca um loop e veriﬁque se o vetor contem realmente os 1500 valores inicializados com zero (conte os
1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu ındice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor. */

int main(){
    int *vet, cont = 0;

    vet = (int*) calloc(1500, sizeof(int));

    for (int c=0; c<1500; c++){
        if (vet[c] == 0) cont++;

        vet[c] = c;
    }

     if (cont == 1500) printf("Tem 1500 0 no vetor.\n\n");

    for (int c=0; c<10; c++){
        printf("%d\n", vet[c]);
    }

     printf("\n\n");
     for (int c=1490; c<1500; c++){
        printf("%d\n", vet[c]);
     }

    return 0;
}
