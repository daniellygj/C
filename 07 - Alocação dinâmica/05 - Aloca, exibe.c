#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que leia do usuario o tamanho de um vetor a ser lido e faca a alocacao dinamica de memoria.
Em seguida, leia do usuario seus valores e imprima o vetor lido. */

int main(){
    int *vet, tam, *p;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*) malloc (tam * sizeof(int));

    printf("Entre com os elementos do vetor: ");
    for (int c=0; c<tam; c++) scanf("%d", &vet[c]);

    printf("Elementos do vetor: ");
    for (int c=0; c<tam; c++) printf("%d ", vet[c]);
}
