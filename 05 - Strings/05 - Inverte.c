#include <stdio.h>
#include <locale.h>

/* Leia uma palavra e imprima de tras para frente */

#include <string.h>
#define TAM 46

int main(){
    char palavra[TAM];
    int c;

    fgets(palavra, TAM, stdin);
    palavra[strlen(palavra)] = '\0';

    for (c=strlen(palavra)-1; c>=0; c--){
        printf("%c", palavra[c]);
    }

    return 0;
}
