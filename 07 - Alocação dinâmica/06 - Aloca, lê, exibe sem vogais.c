#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* Faca um programa que receba do usuario o tamanho de uma string e chame uma funcao para alocar dinamicamente essa string.
Em seguida, o usuario devera informar o conteudo dessa string. O programa imprime a string sem suas vogais. */

int main(){
    char *vet;
    int tam = 10;

    vet = (char*) malloc(sizeof(char) + 1);

    gets(vet);

    printf("%s", vet);

    free(vet);

}
