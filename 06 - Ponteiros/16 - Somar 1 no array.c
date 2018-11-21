#include <stdio.h>
#include <locale.h>

/* Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe
o ponteiro ao array. Agora, some mais um (+1) a cada posicao do array usando o ponteiro. */

#define TAM 3

int main(){
    int vet[TAM] = {2, 3, 4}, *p;

    p = vet;

    for (int c=0; c<TAM; c++){
        printf("%d ", *p + 1);
        p++;
    }
}
