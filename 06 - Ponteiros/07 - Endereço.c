#include <stdio.h>
#include <locale.h>

/* Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do
teclado e imprima o endereco das posicoes contendo valores pares */

#define TAM 5

int main(){
    setlocale(LC_ALL, "portuguese");
    int vet[TAM], c;

    for (c=0; c<TAM; c++){
        scanf("%d", &vet[c]);
    }

    for (c=0; c<TAM; c++){
        if (vet[c] % 2 == 0){
            printf("Posicao: %d  Endereço: %d\n", c, &vet[c]);
        }
    }

    return 0;
}
