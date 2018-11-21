#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

void imprime_vetor(int vetor[TAM]);
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada);

int main() {
    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98}, valorProcurado, posicao, posicaoEncontrada, cont;

    imprime_vetor(vetor);

    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);

    if (busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1) printf("O valor foi encontrado na posicao: %d", posicaoEncontrada);
    else printf("Valor nao encontrado");

    return 0;
}

void imprime_vetor(int vetor[TAM]) {
    for(int i=0; i<TAM; i++) printf("%d - ", vetor[i]);
}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {
    bool valorFoiEncontrado;

    for(int i = 0; i < TAM; i++) {
        if(vetor[i] == valorProcurado) {
            valorFoiEncontrado = true;
            *posicaoEncontrada = i;

            return 1;
        }
    }
}

