#include <stdio.h>
#include <locale.h>

/* Escreva uma funcao que retorna o maior valor de um array de tamanho N. Escreva um programa que
leia N valores inteiros, imprima o array com k elementos por linha, e o maior elemento. O valor de k
tambem deve ser fornecido pelo usuario. */

#define TAM 6

int maior(int *vet);

int main(){
    int vet[TAM], n, aux=0, xx;

    printf("Elementos do vetor: ");
    for (int c=0; c<TAM; c++){
        scanf("%d", &vet[c]);
    }

    printf("Quantos numeros por linha? ");
    scanf("%d", &n);

    printf("\nMaior numero: %d\n", maior(vet));

    printf("\n");

    for (int c=0; c<TAM; c++){
        printf("%d ", vet[c]);
        aux++;
        if (aux == n){
            printf("\n");
            aux = 0;
        }
    }

    return 0;
}

int maior(int *vet){
    int Maior;

    for (int c=0; c<TAM; c++){

        if (c == 0) Maior = *vet;

        if (*vet > Maior) Maior = *vet;

        vet++;
    }

    return Maior;
}
