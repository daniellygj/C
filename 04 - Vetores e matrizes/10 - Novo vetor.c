#include <stdio.h>
#include <locale.h>

// Faca um programa que leia dois vetores, A e B, com 10 numeros inteiros cada. Crie um novo vetor denomidado C calculando C = A - B. Mostre na tela os dados do vetor C.

#define TAM 10
int main(){
    int A[TAM], B[TAM], C[TAM], c;

    printf("Vetor A: \n");
    for (c=0; c<TAM; c++){
        scanf("%d", &A[c]);
    }

    printf("\n\nVetor B: \n");
    for (c=0; c<TAM; c++){
        scanf("%d", &B[c]);
    }

    printf("\n\nVetor C: \n");
    for (c=0; c<TAM; c++){
        C[c] = A[c] - B[c];
        printf("%d\n", C[c]);
    }

    return 0;
}
