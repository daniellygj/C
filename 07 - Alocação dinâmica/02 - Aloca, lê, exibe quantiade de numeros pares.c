#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a locacao dinamica de memoria.
Em seguida, leia do usuario seus valores e mostre quantos dos numeros sao pares e quantos sao impares. */

int main(){
    int *vet, tam;

    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*) malloc(tam * sizeof(int));

    printf("Entre com os elementos do vetor: ");
    for (int c=0; c<tam; c++) scanf("%d", &vet[c]);

    for (int c=0; c<tam; c++) if (vet[c] % 2 == 0) printf("%d ", vet[c]);

    free(vet);
}
