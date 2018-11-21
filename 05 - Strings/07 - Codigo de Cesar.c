#include <stdio.h>
#include <locale.h>

/* O codigo de Cesar e uma das mais simples e conhecidas tecnicas de criptografia. E um tipo de substituicao na qual cada letra do texto ˜e substituıda por outra,
que se apresenta no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de tres posicoes, A seria substituıdo por D, B se tornaria E, e assim
por diante. Implemente um programa que faca uso desse Codigo de Cesar (3 posicoes), entre com uma string e ˜retorne a string codificada. */

#define TAM 200

int main(){
    char frase[TAM];
    int c, tam;

    fgets(frase, TAM, stdin);
    tam = strlen(frase);
    frase[tam] = '\0';

    for (c=0; c<tam; c++){
        if (frase[c] != ' '){
            frase[c] += 3;
        }
    }

    printf("%s", frase);

    return 0;
}
