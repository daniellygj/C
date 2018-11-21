#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Faca um programa que leia uma quantidade qualquer de numeros armazenando-os na memoria e pare a leitura
quando o usuario entrar um numero negativo. Em seguida, imprima o vetor lido. Use a funcao REALLOC. */

int main(){
    int *vet, c=0;

    vet = (int*) malloc(sizeof(int));

    do {
        vet = (int*) realloc(vet,sizeof(int));
        //printf(">%d\n", c);
        c++;
        scanf("%d", &vet[c]);
    } while (vet[c] >= 0);

    printf("\n\n");
    for (int c2=1; c2<c; c2++) printf("%d\n", vet[c2]);

    return 0;
}
