#include <stdio.h>
#include <locale.h>

/* Implemente uma func˜ao que receba como parametro um array de numeros reais de tamanho N
e retorne quantos numeros negativos ha nesse array. Essa funcao deve obedecer ao prototipo:
int negativos(float *vet, int N); */

#define TAM 5

int negativos(float *vet, int N);

int main(){
    float vet[TAM];

    for (int c=0; c<TAM; c++){
        scanf("%f", &vet[c]);
    }

    printf("\n%d\n", negativos(vet, TAM));

    return 0;
}

int negativos(float *vet, int N){
    int cont = 0;

    for (int c=0; c<N; c++){
        if (vet[c] < 0)+
            cont ++;
    }

    return cont;
}
