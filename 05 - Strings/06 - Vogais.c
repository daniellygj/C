#include <stdio.h>
#include <locale.h>

/* Leia uma palavra e calcule quantas vogais ela possui. Depois Leia um caractere e substitua todas as vogais da palavra dada por esse caractere */

#define TAM 46

int main(){
    char palavra[TAM], caractere, contvogal;
    int c, tam;

    fgets(palavra, TAM, stdin);
    tam = strlen(palavra);
    palavra[tam] = '\0';

    scanf("%c", &caractere);

    for (c=0; c<tam; c++){
        if (palavra[c] == 'a' || palavra[c] == 'e' || palavra[c] == 'i' || palavra[c] == 'o' || palavra[c] == 'u'){
            contvogal ++;
            palavra[c] = caractere;
        }
    }

    printf("%d\n%s",contvogal, palavra);
    return 0;
}
