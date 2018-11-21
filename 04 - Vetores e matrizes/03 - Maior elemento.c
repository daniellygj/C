#include <stdio.h>
#include <locale.h>

// Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima o maior elemento e a posição que se encontra.

int main(){
    int vet[10], maior, posicao, c;

    for (c=0; c<10; c++){
        scanf("%d", &vet[c]);
    }

    for (c=0; c<10; c++){
        if (c == 0){
            maior = vet[c];
            posicao = c;
        }

        if (vet[c] > maior){
            maior = vet[c];
            posicao = c;
        }
    }

    printf("%d -> %d", maior, posicao+1);

    return 0;
}
