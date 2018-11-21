#include <stdio.h>
#include <locale.h>

/* Faca um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * 1) % (i + 1), sendo i a posicao do elemento no vetor. Em seguida, imprima o vetor na tela. */


int main(){
    int vet[50], c;

    for (c=0; c<50; c++){
        vet[c] = (c+5*c) % (c+1) ;
        printf("%d\n", vet[c]);
    }

    return 0;
}
