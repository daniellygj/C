#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Crie um programa que:

(a) Aloque dinamicamente um array de 5 numeros inteiros;
(b) Peca para o usuario digitar os 5 numeros no espaco alocado;
(c) Mostre na tela os 5 numeros;
(d) Libere a memoria alocada. */

int* alocavet(int tam){
    int *aux;

    aux = (int*) malloc (tam * sizeof(int));
    return aux;
}

int main(){
    int tam = 5, *vet;

    vet = alocavet(tam);

    for (int c=0; c<tam; c++) scanf("%d", &vet[c]);

    for (int c=0; c<tam; c++) printf("%d ", vet[c]);

    free(vet);

    return 0;
}
