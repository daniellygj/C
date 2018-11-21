#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Leia uma frase e depois retire os espaços em branco e escreva o vetor resultante */

#define TAM 50


int main(){
    char frase[TAM];
    int  c, c2=0;

    fgets(frase, TAM, stdin);

    for (c=0, c2; c<strlen(frase); c++, c2++){
        if (frase[c] == ' '){
            c2++;
        }
        frase[c] = frase[c2];
    }

    printf("%s", frase);

    return 0;
}
