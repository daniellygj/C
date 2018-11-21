#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que dada uma string, retorne 1 se for palindromo e 0 se nao for. */

#define TAM 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char frase[TAM], invertido[TAM], frase2[TAM];
    int c, tam=0, c2=0;

    gets(frase);
    tam = strlen(frase)+1;

    for (c=tam; c>=0; c--){
        if (frase[c] != '\0' && frase[c] != ' '){
            invertido[c2] = frase[c];
            frase2[c2] = frase[c];
            c2++;
        }
    }

    invertido[c2] = '\0';
    frase2[c2] = '\0';

    if (strcmpi(invertido, frase2) == 0){
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
