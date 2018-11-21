#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido. */

#define TAM 5
int main(){
    int *vet, *p, c;

    vet = (int *) malloc (TAM * sizeof(int));
    p = vet;

    for (c=0; c<TAM; c++){
        scanf("%d", p);
        p++;
    }

    p = vet;

    for (c=0; c<TAM; c++){
        printf("%d ", *p * 2);
        p++;
    }

    free(vet);

    return 0;
}
