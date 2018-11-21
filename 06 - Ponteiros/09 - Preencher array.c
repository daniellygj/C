#include <stdio.h>
#include <locale.h>

/* Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do array. A funcao devera preencher os elementos de array com esse valor.
Nao utilize ındices para percorrer o array, apenas aritmetica de ponteiros. */

#include <stdio.h>
#include <string.h>
#define TAM 5

void preencher(char *str, char letra){
    int c;


    for (c=0; c<TAM; c++){
        *str = letra;
        *str++;
    }
    *str = '\0';
}

int main(){
    char str[TAM], letra;

    scanf("%c", &letra);

    preencher(str, letra);

    printf("%s", str);
}
