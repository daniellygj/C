#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){ //randomiza vetor


    setlocale(LC_ALL, "portuguese");

    char vet[4][100], aux;
    int c, i, rnd;

    printf("Entre com 4 nomes: \n");
    for(c=0; c<4; c++){
        fgets(vet[c], 100, stdin);
        vet[c][strlen(vet[c])-1] = '\0';
    }

    for(i=0; i<4; i++){
        rnd = rand() % 4;
        printf("\n%s, %d", vet[rnd], rnd);
    }
}
