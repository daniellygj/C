#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Ler uma frase e contar quantos caracteres são brancos */

#define TAM 50

int main(){
    char frase[TAM], c;
    int cont = 0;

    fgets(frase, TAM, stdin);

    for (c=0; c<strlen(frase); c++){
        if (frase[c] == ' '){
            cont++;
        }
    }

    printf("%d", cont);

    return 0;
}
