#include <stdio.h>
#include <locale.h>
#include <string.h>
#define TAM 30

/* Receber um nome e imprmir as 4 primeiras letras */

int main(){
    char nome[TAM], c;

    fgets(nome, TAM, stdin);

    nome[strlen(nome)-1] = '\0';

    for(c=0; c<4; c++){
        printf("%c", nome[c]);
    }

    return 0;
}
