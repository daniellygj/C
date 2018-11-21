#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Leia um nome, calcule e retorne quantas letras tem esse nome */

#define TAM 30

int main(){
    char nome[TAM];
    int c;

    fgets(nome, TAM, stdin);

    printf("%d", strlen(nome)-1);

    return 0;
}
